/**
 * Author: Nasreddine El Gourji
 * Created on: 05.05.2025 at 18:09
 * Description: main2.cpp
 */

//
// Created by nasre on 05.05.2025.
//


// Optional custom header

// Standard Libraries
#include <iostream>      // For input/output operations
#include <vector>        // For dynamic arrays
#include <string>        // For string manipulations
#include <algorithm>     // For sorting, searching, etc.
#include <cmath>         // For mathematical functions
#include <map>           // For key-value data structures
#include <set>           // For unique collections
#include <unordered_map> // For faster key-value lookups
#include <limits>        // For numeric limits
#include <cstdlib>       // For general-purpose functions
#include <ctime>         // For time-related functions
#include <sstream>
#include <string>
// Optional headers (uncomment if needed)
// #include <fstream>    // For file I/O
// #include <thread>     // For multithreading
// #include <queue>      // For queue data structure
// #include <stack>      // For stack data structure


#include <iostream>
#include <memory>
#include "Server.h"
#include "Pod.h"
#include "Container.h"
#include "KubernetesCluster.h"
#include "CloudExceptions.h"
#include "Cloud_Util.h"
#include "MetricLogger.h"
using namespace std;

int main() {
    std::cout << "===␣Test␣AllocationException␣direct␣===\n";
    /* Modifier cette partie pour gérer l'exception*/
    Server failNode("fail-node", 1.0, 1024.0);
    try {
        failNode.allocate(4.0, 4096.0); // Trop gros
    }
    catch(AllocationException& e) {
        cout << "Exception capturée : "<< e.what() << endl;
    }

    std::cout << "\n===␣Test␣FileException␣===\n";
    KubernetesCluster cluster;
    auto nodeX = std::make_shared<Server>("nodeX", 12.0, 12048.0);
    nodeX->start(); // activer le noeud
    cluster.addNode(nodeX); // cluster non vide
    /* Gérer l'erreur d'ouverture du fichier */
    try{
        saveClusterMetrics(cluster, "cluster1_metrics.txt");
        cout << "Metriques sauvegardées avec succès" << endl;
    }
    catch(FileException& e) {
        cout << "FileException : " << e.what() << endl;
    }




    std::cout << "\n===␣Test␣Lambda␣:␣serveurs␣inactifs␣===\n";
    KubernetesCluster cluster1;
    auto inactiveServer = std::make_shared<Server>("node3", 2.0, 4096.0); // Ne sera pas activé
    cluster1.addNode(inactiveServer);
    /* Filtrer et afficher les serveurs inactifs à l'aide de la fonction getFilteredServers */
    auto inactifs = cluster1.getFilteredServers([](const Server& s) {
    return !s.isActive();
    });

    for (const auto& server : inactifs) {
        std::cout << *server << std::endl;
    }



    std::cout << "\n===␣Déploiement␣sur␣un␣serveur␣inactif␣===\n";
    auto c = std::make_unique<Container>("inactive-c1", "busybox", 1.0, 1024.0);
    auto pod = std::make_unique<Pod>("test-pod");
    pod->addContainer(std::move(c));
    /* Gérer l'erreur ici du deploiement */
    try {
        cluster1.deployPod(std::move(pod));
    }
    catch(AllocationException& e) {
        cout << "Exception capturée : " << e.what() << endl;
    }




    std::cout << "\n===␣Pods␣triés␣par␣nombre␣de␣conteneurs␣===\n";
    // Création des conteneurs
    auto c1 = std::make_unique<Container>("c1", "nginx", 2.0, 1024.0);
    auto c2 = std::make_unique<Container>("c2", "redis", 4, 2048.0);
    auto c3 = std::make_unique<Container>("c3", "mysql", 2, 1024.0);
    auto c4 = std::make_unique<Container>("c4", "myapp", 10, 12024.0);
    // Création des pods
    auto pod1 = std::make_unique<Pod>("web-pod");
    pod1->addContainer(std::move(c1));
    pod1->addContainer(std::move(c2));
    auto pod2 = std::make_unique<Pod>("db-pod");
    pod2->addContainer(std::move(c3));
    // Déploiement sans planification réelle, on injecte les pods manuellement
    std::vector<std::unique_ptr<Pod>> pods;
    pods.push_back(std::move(pod1));
    pods.push_back(std::move(pod2));


    //vu que pod est null mnt
    if (pod ) {
        try {
            cluster.deployPod(std::move(pod));
        }
        catch(AllocationException& e) {
            cout << "Exception capturée : " << e.what() << endl;
        }
    }

    std::sort(pods.begin(), pods.end(), [](const std::unique_ptr<Pod>& a, const std::unique_ptr<Pod>& b) {
        return (a->getContainers()).size() > (b->getContainers()).size(); ;
    });



    deployPods(cluster,pods);




    std::cout << "\n===␣Tri␣des␣pods␣===\n";
    /* Tri des pods */
    std::vector<const Pod*> podRefs ;

    for (const auto& pod_ : cluster.getPods()) {
        podRefs.push_back(pod_.get());
    }

    std::sort(podRefs.begin(), podRefs.end(), [](const Pod* a, const Pod* b) {
        return (a->getContainers()).size() > (b->getContainers()).size();
    });

    //afficher
    for (const auto& pod_ : podRefs) {
        cout << *pod_ << endl;
    }

    std::cout << "\n===␣Tous␣les␣conteneurs␣du␣cluster␣1␣===\n";
    forEachContainer(cluster, [&](const Container& container) {
        cout << container << endl;
    });


    return 0;
}

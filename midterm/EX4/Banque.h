//
// Created by nasre on 24.03.2025.
//
#ifndef BANQUE_H
#define BANQUE_H
#include <iostream>      // For input/output operations
#include <vector>
#include <string>
#include <memory>

#include "CompteBancaire.h"


using namespace std;



class Banque{
  private:
    bool numeroExiste(const string& numero) const;
  public:
    vector<CompteBancaire> comptes;
    void ajouterCompte(CompteBancaire&& compte);
    void suppimerCompte(const string& numero);
    CompteBancaire* ChercherCompte(const string& numero);
    void afficherComptes() const;
    void afficherComptesParNom(const string& nom) const;
    void afficherComptesParCin(const string& cin) const;


};

#endif //BANQUE_H

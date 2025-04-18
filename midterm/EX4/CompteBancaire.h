//
// Created by nasre on 24.03.2025.
//

#include <iostream>      // For input/output operations
#include <vector>
#include <string>
#include <memory>

using namespace std;
#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H



class CompteBancaire{
  public:
       shared_ptr<string> nomProprietaire;
       unique_ptr<string> numeroCompte;
       shared_ptr<string> cin;
       double solde;
       CompteBancaire(shared_ptr<string> nom,string numero ,shared_ptr<string> cinValue,double soldeInitial);
       void deposer(double montant);
       bool retirer(double montant);
       void afficher() const;
       friend class Banque;
};

#endif //COMPTEBANCAIRE_H

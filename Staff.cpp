#include "Staff.h"

Staff::Staff()
{
    this->personnel = vector<Employe*>(); 
    // le constructeur de la classe vector pour la creation d'un
    // vector dont la taille =0
}

double Staff::calcul_somme_Sal() const
{
    double a = 0;
    for (int i = 0; i < this->personnel.size(); i++) {
        a += this->personnel[i]->calcul_Sal(); // polymorphisme
    }
    return a;

  
}

void Staff::add_employe(Employe* E)
{
    this->personnel.push_back(E);
}

Staff::~Staff()
{
    for (int i = 0; i < this->personnel.size(); i++)
    {
        delete this->personnel[i]; // polymorphisme
        this->personnel[i] = 0;
    }
    this->personnel.clear();



}

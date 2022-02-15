#include "Employe.h"

int Employe::count = 0;
float Employe::val_augmentation = 50;


Employe::Employe(string nom, double indice_Sal)
    : matricule(++Employe::count)
{
    std::cout << "constructeur de la classe employe" << std::endl;
    this->nom = nom; 
    this->indice_Sal = indice_Sal;
}

Employe::Employe() :
    matricule(++Employe::count)
{
}

double Employe::calcul_Sal() const
{
    float s = (this->indice_Sal*Employe::val_augmentation);
    return s;

}

void Employe::afficher() const
{
    std::cout << "nom : " << this->nom << std::endl; 
    std::cout << " matricule: " << this->matricule << std::endl;
    std::cout << "indice_sal : " << this->indice_Sal << std::endl;
    std::cout << " augmentation: " <<Employe::val_augmentation << std::endl;
}

Employe::~Employe()
{
    std::cout << "destructeur de la classe Employe" << std::endl;
}

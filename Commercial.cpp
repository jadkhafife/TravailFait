#include "Commercial.h"

Commercial::Commercial(string n, float indice_sal, int nmbreVentes)
    :Employe(n, indice_sal)
{
    this->nmbreVentes = nmbreVentes;
}

double Commercial::calcul_Sal() const
{
    float salaire = this->Employe::calcul_Sal()+ (this->nmbreVentes / 100);
    return salaire;
}

Commercial::~Commercial()
{
    std::cout << "desctructeur de la classe commercial" << std::endl;
}

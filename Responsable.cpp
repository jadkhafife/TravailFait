#include "Responsable.h"

Responsable::Responsable(string n, float indice_sal)
	: Employe(n, indice_sal)
{
	std::cout << "constructeur de la classe responsable" << std::endl;
	this->subor = vector<Employe*>(); 
	// la creation d'un vecteur dont la taille = 0;
}

void Responsable::afficher() const
{
	this->Employe::afficher();  // demasquage

	for (int i = 0; i < this->subor.size(); i++)
	{
		this->subor[i]->afficher();  // polymorphisme 
	}

}

void Responsable::add_subord(Employe* E)
{
	this->subor.push_back(E);
}


Responsable::~Responsable()
{
	std::cout << " destructeur de la classe Responsable" << std::endl;
	this->subor.clear();
}

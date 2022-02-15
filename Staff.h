#pragma once
#include "Employe.h"
#include <vector>
#include <list>
class Staff
{
public: 
	Staff();

	double calcul_somme_Sal() const;
	void add_employe(Employe* E);
	~Staff();

private: 

	vector<Employe*>  personnel; // aggregation forte 
	//list<Employe*> staff; 
	// declaration d'un vecteur des adresses 
	
};


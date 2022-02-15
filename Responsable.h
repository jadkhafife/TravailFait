#pragma once
#include "Employe.h"
#include<vector> // stl 

class Responsable : public Employe
{

public: 
	Responsable( string n , float indice_sal);
	void afficher() const override; // override(c++)

	void add_subord(Employe* E); 
	//void fun1(int); 
	//void fun1(char); // surcharge (overload) // Surdéfinir


	//void funct(int ) ; // masquage

	~Responsable();
private: 
	//Employe** subord; // aggregation faible

	vector<Employe*> subor; // aggregation faible

};


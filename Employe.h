#pragma once
#include<iostream>
using namespace std;
class Employe
{

public: 
    Employe(string nom, double indice_Sal); // virtual ==> erreur
	Employe();
	 virtual double calcul_Sal() const;
	virtual void afficher() const; 
	//void funct() const;
	virtual ~Employe();

private: 
	string nom; 
	const int matricule;
	static int count;
	double indice_Sal; 
	static float val_augmentation;
};


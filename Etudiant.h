#pragma once
#include <iostream>
#include<string.h>
#include<stdlib.h>
class Etudiant {
private:
	int matricule;
	char nom;
	int nbrNotes;
	float* tabNotes;
	static int n;
public:
	Etudiant();
	Etudiant(string nvnom, int nbr);
	~Etudiant();
	Etudiant(const Etudiant& et);
	void saisie();
	void affichage();
	float moyenne();
	bool admis();
	bool comparer(Etudiant E);
	Etudiant operator==(const Etudiant& E) const;
};
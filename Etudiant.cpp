#include <iostream>
#include<string.h>
#include<stdlib.h>
#include "Etudiant.h"
using namespace std;

Etudiant::Etudiant()
{
	matricule = 0;
	nom = "";
	nbrNotes = 0;
	tabNotes = new float[nbrNotes];
}

Etudiant::Etudiant(char nvnom, int nbr)
{
	n++;
	matricule = n;
	nom = nvnom;
	nbrNotes = nbr;
	tabNotes = new float[nbrNotes];
}

Etudiant::~Etudiant()
{
	delete[] tabNotes;
}

Etudiant::Etudiant(const Etudiant& et)
{
	this->matricule = et.matricule;
	this->nom = et.nom;
	this->nbrNotes = et.nbrNotes;
	this->tabNotes = new float[this->nbrNotes];
	for (int i = 0; i < nbrNotes; i++) {
		this->tabNotes[i] = et.tabNotes;
	}
	return et;
}

void Etudiant::saisie()
{
	cout << "Saisie des notes" << endl;
	for (int i = 0; i < this->nbrNotes; i++) {
		cout << "entrez les valeurs" << endl;
		cin >> this->tabNotes[i];
	}
}

void Etudiant::affichage()
{
	cout << "votre matricule est " << this->matricule << endl;
	cout << "votre nom est" << this->nom << endl;
	cout << "vos notes :" << endl;
	for (int i = 0; i < this->nbrNotes; i++) {
		cout << this->tabNotes[i] << endl;
	}
}

float Etudiant::moyenne()
{
	float s=0, m = 0;
	for (int i = 0; i < this->nbrNotes; i++) {
		s+=this->tabNotes[i];
	}
	m = s / this->nbrNotes;
	return m;
}

bool Etudiant::admis()
{
	return (this->moyenne()>=10);
}

bool Etudiant::comparer(Etudiant E)
{
	 return(this->moyenne() == E.moyenne); 
}

Etudiant Etudiant::operator==(const Etudiant& E) const
{
	if (this != &E) {
		this->matricule = E.matricule;
		delete[] this->nom;
		this->nom = 0;
		this->nom = new char[strlen(E.nom) + 1];
		strcpy_s(this->nom, strlen(E.nom) + 1, E.nom);
		this->nmbreNotes = E.nmbreNotes;
		delete[] this->tabNotes;
		this->tabNotes = 0;
		this->tabNotes = new float[this->nmbreNotes];
		for (int i = 0; i < this->nmbreNotes; i++)
		{
			this->tabNotes[i] = E.tabNotes[i];
		}
	}
	return *this;
}

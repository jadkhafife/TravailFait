#pragma once
#include "Employe.h"
class Commercial :  public Employe
{

public: 
	Commercial(string n, float indice_sal, int nmbreVentes); 
	double calcul_Sal() const override;
	~Commercial();

private: 

	int nmbreVentes;

};


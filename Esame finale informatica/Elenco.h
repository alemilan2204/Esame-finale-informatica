#pragma once
#include "Persone.h"
#include<forward_list>		//per usare le liste che sono array dinamici
#include <iostream>
using namespace std;

class Elenco
{
private:
	forward_list<Persone> elenco;

public:
	Elenco();
	void StampaElenco(forward_list<Persone> elenc);
	void AggiungiElemento( Persone persona);
	forward_list<Persone> GetLsit();
};


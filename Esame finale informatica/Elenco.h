#pragma once
#include <iostream>
using namespace std;
#include "Persone.h"
#include<forward_list>		//per usare le liste che sono array dinamici

class Elenco
{


public:
	Elenco();
	void StampaElenco(forward_list<Persone> elenc);
};


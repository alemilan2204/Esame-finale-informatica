#include "Elenco.h"

Elenco::Elenco()
{
	forward_list<Persone> elenco;		//si crea una lista di nome "elenco"
}

void Elenco::StampaElenco(forward_list<Persone> elenc) 
{
	cout << "Elementi della lista: \n"; 
	for (Persone& x : elenc) 
	{ 
		cout << x.StampaInformazioni() << endl; 
	};
}
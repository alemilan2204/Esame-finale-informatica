#include "Elenco.h"


Elenco::Elenco(){}

forward_list<Persone> Elenco::GetLsit()
{
	elenco;
	
	return elenco;

}

void Elenco::StampaElenco(forward_list<Persone> elenc) 
{
	
	cout << "Elementi della lista: \n"; 
	for (Persone& x : elenc) 
	{ 
		cout << x.GetNome() << endl; 
	};
}

void Elenco::AggiungiElemento(Persone persona)
{
	elenco.emplace_front(persona);
	return;
}


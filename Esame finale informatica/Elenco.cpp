#include "Elenco.h"


Elenco::Elenco(){}

list<Persone> Elenco::GetList()
{
	elenco;
	
	return elenco;

}

void Elenco::StampaElenco(list<Persone> elenc) 
{
	if (elenc.size() == 0)
	{
		cout << "\nELENCO VOUTO";
	}
	else
	{

		cout << "\nElementi della lista: \n\n"; 
		for (Persone& x : elenc) 
		{ 
			//cout << x.GetNome() << " " << x.GetCognome() << "	| Codice fiscale: " << x.GetCF() << endl; 
			x.StampaInformazioni();
			cout << "\n-- -- -- -- -- -- -- --\n";
		};

	}
}

void Elenco::AggiungiElemento(Persone persona)
{
	elenco.emplace_front(persona);
	return;
}


#include "Grafica.h"

Grafica::Grafica(){}

void Grafica::SetSezione(string s)
{
	sezione = s;
	return;
}

string Grafica::GetSezione()
{
	return sezione;
}

void Grafica::LogicaGrafica(string section)	// stati:  -HOME  -GESTIONE -VISUALIZZA ELENCO
{
	system("cls");
	Grafica gestoreGrafica = Grafica();
	Elenco elenco1 = Elenco();

	char operazione = 0;

	while (gestoreGrafica.GetSezione() != "uscita")
	{
		// -- -- -- -- -- -- -- -- GESTTIONE HOME -- -- -- -- -- -- -- -- -- 

		if (gestoreGrafica.GetSezione() == "home")
		{
			Home(operazione, gestoreGrafica);
		}

		// -- -- -- -- -- -- -- -- GESTTIONE ELENCO -- -- -- -- -- -- -- -- -- 

		if (gestoreGrafica.GetSezione() == "gestione")
		{
			Gestione(gestoreGrafica, elenco1);
		}

		// -- -- -- -- -- -- -- -- VISUALIZZAZIONE ELENCO -- -- -- -- -- -- -- -- -- 

		if (gestoreGrafica.GetSezione() == "visualizzazione")
		{
			system("cls");
			// -- -- -- -- --
			cout << "[ ELENCO ]\n";
			elenco1.StampaElenco(elenco1.GetLsit());
			_getch();
			gestoreGrafica.SetSezione("home");
		}

	}

}


void Home(char& operazione, Grafica& gestoreGrafica)
{
	system("cls");
	cout << "Benvenuto nel database, selezione l'operazione da fare tra:"
		"\n(G) - Gestione elenco;\n(V) - Visualizza Elenco\n(U) - Uscita\nOperazione: ";

	cin >> operazione;

	while (operazione != 'G' && operazione != 'V' && operazione != 'U' 
		&& operazione != 'g' && operazione != 'v' && operazione != 'u')
	{
		cout << "Carattere non riconosciuto! ";
		cout << "\nInserieci operazione: ";
		cin >> operazione;
	}

	if (operazione == 'G' || operazione == 'g')
	{
		gestoreGrafica.SetSezione("gestione");
	}
	else if (operazione == 'V' || operazione == 'v')
	{
		gestoreGrafica.SetSezione("visualizzazione");
	}
	else if (operazione == 'U' || operazione == 'u')
	{
		gestoreGrafica.SetSezione("uscita");
	}
}

void Grafica::Gestione(Grafica& gestoreGrafica, Elenco& elenco2)
{
	char op;
	system("cls");

	// -- -- -- -- -- -- -- 

	cout << "Selezionare un operazione: \n(A) - Aggiungi persona;"
		"\n(E) - Elimina persona dall'elenco\nOperazione: ";
	cin >> op;

	while (op != 'A' && op != 'E' && op != 'a' && op != 'e')
	{
		cout << "Carattere non riconosciuto!\nInserire nuovo carattere: ";
		cin >> op;
	}
	if (op == 'A' || op == 'a')
	{
		Persone persona1 = Persone();
		elenco2.AggiungiElemento(persona1.CreaPersona(persona1));

	}
	else if (op == 'E' || op == 'e')
	{
		//TODO

		forward_list<Persone> elenco = elenco2.GetLsit();
		int contatore = 0;
		int scelta = 0;
		bool risultatoCorretto = 0;
		string cfScelto = "";

		// -- -- -- -- 
		string elimina = "";
		cout << "Inserire nome da eliminare: ";
		cin >> elimina;

		for (Persone& x : elenco)
		{
			if (x.GetNome() == elimina) 
			{
				contatore++;
				cout << "Risultati della ricerca '" << elimina <<"' :\n\n";
				cout << "Risultato " << contatore << ":"<< endl;
				x.StampaInformazioni();
				cfScelto = x.GetCF();
				cout << endl;
			}
		};

		cout << "Scegliere il risultato da eliminare: ";
		cin >> scelta;

		if (scelta == contatore)
		{
			risultatoCorretto == true;
		}

		Persone RitornaPersonaDaEliminare(Persone ppl1, bool sceltaGiusta);
		
		
		//elenco.remove_if(x);

		
	}
	gestoreGrafica.SetSezione("home");
}

Persone RitornaPersonaDaEliminare(Persone ppl1, bool sceltaGiusta)
{
	

	return;
}
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


void Grafica::LogicaGrafica(string section)													// stati:  -HOME  -GESTIONE -VISUALIZZA ELENCO
{
	system("cls");
	Grafica gestoreGrafica = Grafica();
	Elenco elenco1 = Elenco();
	Persone persona1 = Persone();

	char operazione = 0;																	// serve per la navigazione dei menù

	while (gestoreGrafica.GetSezione() != "uscita")											// condizione di uscita
	{
		// -- -- -- -- -- -- -- -- GESTTIONE HOME -- -- -- -- -- -- -- -- -- 

		if (gestoreGrafica.GetSezione() == "home") { Home(operazione, gestoreGrafica); }

		// -- -- -- -- -- -- -- -- GESTTIONE ELENCO -- -- -- -- -- -- -- -- -- 

		if (gestoreGrafica.GetSezione() == "gestione") { Gestione(gestoreGrafica, elenco1, persona1); }

		// -- -- -- -- -- -- -- -- VISUALIZZAZIONE ELENCO -- -- -- -- -- -- -- 

		if (gestoreGrafica.GetSezione() == "visualizzazione")
		{
			system("cls");
			cout << "[ ELENCO ]\n";

			elenco1.StampaElenco(elenco1.GetList());										// La funzione StampaElenco() stampa l'elenco di persone contenute nella variabile dichiarata al suo interno,
			_getch();									//_getch aspetta un imput;			// la funzione GetList() ritorna la lista, in quanto la funzione StampaElenco ha bisogno di una variabile di tipo
			gestoreGrafica.SetSezione("home");												// "list" non di una variabile di tipo "Elenco". 
		}	

	}

}







void Home(char& operazione, Grafica& gestoreGrafica)
{
	system("cls");																				// pulisce console e stampa le istruzioni
	cout << "Benvenuto nel database, selezione l'operazione da fare tra:"
		"\n(G) - Gestione elenco;\n(V) - Visualizza Elenco\n(U) - Uscita\nOperazione: ";

	cin >> operazione;

	while (operazione != 'G' && operazione != 'V' && operazione != 'U'							//  verifica che i caratteri siano diversi da G,V,U,g,v,u e se lo sono li richiede
		&& operazione != 'g' && operazione != 'v' && operazione != 'u')
	{
		cout << "Carattere non riconosciuto! ";
		cout << "\nInserieci operazione: ";
		cin >> operazione;
	}

	if (operazione == 'G' || operazione == 'g')
	{
		gestoreGrafica.SetSezione("gestione");													//sposta il programma nella sezione "GESTIONE"
	}

	else if (operazione == 'V' || operazione == 'v')
	{
		gestoreGrafica.SetSezione("visualizzazione");											//sposta il programma nella sezione "VISUALIZZAZIONE DELL'ELENCO"
	}

	else if (operazione == 'U' || operazione == 'u')
	{
		gestoreGrafica.SetSezione("uscita");													//esce dal programma
	}
}











void Grafica::Gestione(Grafica& gestoreGrafica, Elenco& elenco2, Persone& persona2)
{
	char op;
	system("cls");

	// -- -- -- -- -- -- -- 

	cout << "Selezionare un operazione: \n(A) - Aggiungi persona;"
		"\n(M) - Modifica informzaioni persona \nOperazione: ";
	cin >> op;

	while (op != 'A' && op != 'M' && op != 'a' && op != 'm')					
	{
		cout << "Carattere non riconosciuto!\nInserire nuovo carattere: ";
		cin >> op;
	}

	if (op == 'A' || op == 'a')													
	{

		elenco2.AggiungiElemento(persona2.CreaPersona(persona2));
	}

	else if (op == 'M' || op == 'm')											
	{
		ModificaPersona(elenco2);
	}

	gestoreGrafica.SetSezione("home");
}






void Grafica::ModificaPersona(Elenco& elenco2)
{

	list<Persone> lista = elenco2.GetList();													// Passaggio effettuato per praticità: viene immagazzinata la "forward_list" data in 
	int contatore = 0;																			// input in una variabile per migliore leggibilità in seguito
	char scelta;
	string modifica = "";
	char sceltaModifica;
	string modificaInfoS = "";
	int modificaInfoI = 0;
	float modificaInfoF = 0.0;
	char modificaInfoC = 0;


	// -- -- -- -- 

	cout << "Inserire nome da modificare: ";
	cin >> modifica;
	cout << "\nRisultati della ricerca '" << modifica << "' :\n\n";
														

	for (Persone & x : lista)																	// cicla tutti gli elementi della lista
	{
		if (x.GetNome() == modifica)															//verifica che il nome dell'elemento preso in considerazione sia uguale a quello ricercato
		{
			contatore++;
			cout << "Risultato " << contatore << ":" << endl;

			x.StampaInformazioni();																// Stampa le info della persona, per verificare che sia quella che si vuole modificare se ce n'è più di una

			cout << "\nE' questo il risultato che vuoi modificare? \n<Y/N>: ";

			cin >> scelta;
			while (scelta != 'Y' && scelta != 'N' && scelta != 'y' && scelta != 'n')
			{
				cout << "Carattere non riconosciuto!\nInserire nuovo carattere: ";
				cin >> scelta;
			}

			if (scelta == 'Y' || scelta == 'y')
			{
				
				cout << "\n[ MODIFICA DELLA PERSONA " << x.GetNome() << " " << x.GetCognome() << " ]\n";
				cout << "Selezionare cosa si vuole modificare: \n(N) - Nome\n(C) - Cognome\n"
						"(E) - Eta'\n(S) - Sesso\n(A) - Altezza\n(O) - Occhi\n(H) - Capelli\n(F) - codice fiscale\n";
				cout << "Scelta: ";
				cin >> sceltaModifica;
					
				switch (sceltaModifica)
				{

				case 'N':
					cout << "Vecchio nome: " << x.GetNome() << endl;
					cout << "Inserire nuovo nome: ";
					cin >> modificaInfoS;

					x.SetNome(modificaInfoS);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'C':
					cout << "Vecchio cognome: " << x.GetCognome() << endl;
					cout << "Inserire nuovo cognome: ";
					cin >> modificaInfoS;

					x.SetCognome(modificaInfoS);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'E':
					cout << "Vecchia eta': " << x.GetEta() << endl;
					cout << "Inserire nuovo eta': ";
					cin >> modificaInfoI;

					while (cin.fail())																				// verifica che non siano inserite cose diverse da un numero
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(),'\n');
						fflush(stdin);
						cout << "Carattere non riconosciuto, deve essere inserito un numero: ";
						cin >> modificaInfoI;
					}

					x.SetEta(modificaInfoI);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'S':
					cout << "Vecchio sesso: " << x.GetNome() << endl;
					cout << "Inserire nuovo sesso: ";
					cin >> modificaInfoC;

					if (modificaInfoC != 'M' && modificaInfoC != 'F')
					{
						cout << "Carattere non riconosciuto, inserire o 'M' o 'F': ";
						cin >> modificaInfoC;
					}
					else
					{
						x.SetSesso(modificaInfoC);
					}
						
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'A':
					cout << "Vecchia altezza: " << x.GetAltezza() << endl;
					cout << "Inserire nuova altezza: ";
					cin >> modificaInfoF;
						
					while (cin.fail())																			
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						fflush(stdin);
						cout << "Carattere non riconosciuto, deve essere inserito un numero: ";
						cin >> modificaInfoF;
					}

					x.SetAltezza(modificaInfoF);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'O':
					cout << "Vecchio colore occhi: " << x.GetNome() << endl;
					cout << "Inserire nuovo colore occhi: ";
					cin >> modificaInfoS;

					x.SetOcchi(modificaInfoS);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'H':
					cout << "Vecchio colore capelli: " << x.GetNome() << endl;
					cout << "Inserire nuovo colore capelli: ";
					cin >> modificaInfoS;

					x.SetCapelli(modificaInfoS);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'F':
					cout << "Vecchio codice fiscale: " << x.GetNome() << endl;
					cout << "Inserire nuovo codice fiscale: ";
					cin >> modificaInfoS;

					x.SetCF(modificaInfoS);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'n':
					cout << "Vecchio nome: " << x.GetNome() << endl;
					cout << "Inserire nuovo nome: ";
					cin >> modificaInfoS;

					x.SetNome(modificaInfoS);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'c':
					cout << "Vecchio cognome: " << x.GetCognome() << endl;
					cout << "Inserire nuovo cognome: ";
					cin >> modificaInfoS;

					x.SetCognome(modificaInfoS);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'e':
					cout << "Vecchia eta': " << x.GetEta() << endl;
					cout << "Inserire nuovo eta': ";
					cin >> modificaInfoI;

					while (cin.fail())																				// verifica che non siano inserite cose diverse da un numero
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						fflush(stdin);
						cout << "Carattere non riconosciuto, deve essere inserito un numero: ";
						cin >> modificaInfoI;
					}

					x.SetEta(modificaInfoI);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 's':
					cout << "Vecchio sesso: " << x.GetNome() << endl;
					cout << "Inserire nuovo sesso: ";
					cin >> modificaInfoC;

					if (modificaInfoC != 'M' && modificaInfoC != 'F')
					{
						cout << "Carattere non riconosciuto, inserire o 'M' o 'F': ";
						cin >> modificaInfoC;
					}
					else
					{
						x.SetSesso(modificaInfoC);
					}
						
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'a':
					cout << "Vecchia altezza: " << x.GetAltezza() << endl;
					cout << "Inserire nuova altezza: ";
					cin >> modificaInfoF;
						
					while (cin.fail())																				
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						fflush(stdin);
						cout << "Carattere non riconosciuto, deve essere inserito un numero: ";
						cin >> modificaInfoF;
					}

					x.SetAltezza(modificaInfoF);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'o':
					cout << "Vecchio colore occhi: " << x.GetNome() << endl;
					cout << "Inserire nuovo colore occhi: ";
					cin >> modificaInfoS;

					x.SetOcchi(modificaInfoS);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'h':
					cout << "Vecchio colore capelli: " << x.GetNome() << endl;
					cout << "Inserire nuovo colore capelli: ";
					cin >> modificaInfoS;

					x.SetCapelli(modificaInfoS);
					x.StampaInformazioni();
					cout << endl;
					break;
						
				case 'f':
					cout << "Vecchio codice fiscale: " << x.GetNome() << endl;
					cout << "Inserire nuovo codice fiscale: ";
					cin >> modificaInfoS;

					x.SetCF(modificaInfoS);
					x.StampaInformazioni();
					cout << endl;
					break;

				default:
					cout << "\nCarattere non riconosciuto, verifica la tua scelta: ";
					cin >> sceltaModifica;

					break;
				}

				_getch();
			}

			cout << endl;
		}
	}


}

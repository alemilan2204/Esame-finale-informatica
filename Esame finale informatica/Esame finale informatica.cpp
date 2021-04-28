#include <iostream>
#include "Persone.h"
#include "Elenco.h"
using namespace std;

int main()
{

    string modificaInfoString = "";
    int modificaInfoInt = 0;
    float modificaInfoFloat = 0.0;
    char modificaInfoChar;


    // -- -- -- -- -- -- -- 

    Persone alberto = Persone("Alberto", "Rossi", 35, 'M', 183.4, "azzurri", "castani");
    Persone mario = Persone("Mario", "Rossi", 27, 'M', 150, "marroni", "neri");
    Persone luigi = Persone("Luigi", "Rossi", 50, 'M', 171.7, "verdi", "rossi");
    //alberto.StampaInformazioni();

    cout << "\n-- -- -- -- -- -- -- \n";
 
    Elenco elenco = Elenco();

    elenco.AggiungiElemento(alberto);
    elenco.AggiungiElemento(mario);
    elenco.AggiungiElemento(luigi);

    elenco.StampaElenco(elenco.GetLsit());

    cout << "\n-- -- -- -- -- -- -- \n";

    Persone persona1 = Persone();
    elenco.AggiungiElemento(persona1.CreaPersona(persona1));

    cout << "\n-- -- -- -- -- -- -- \n";
    elenco.StampaElenco(elenco.GetLsit());


    return 0;
}
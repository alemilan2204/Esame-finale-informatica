#include <iostream>
#include "Persone.h";
using namespace std;

int main()
{

    string modificaInfoString = "";
    int modificaInfoInt = 0;
    float modificaInfoFloat = 0.0;
    char modificaInfoChar;


    // -- -- -- -- -- -- -- 

    Persone alberto = Persone("Alberto", "Rossi", 35, 'M', 183.4, "azzurri", "castani");
    alberto.StampaInformazioni();
    cout << "\n-- -- -- -- -- -- -- \n";
    cout << "Inserire il nuovo nome: ";
    cin >> modificaInfoString;
    alberto.SetNome(modificaInfoString);
    cout << endl;
    alberto.StampaInformazioni();


    
}
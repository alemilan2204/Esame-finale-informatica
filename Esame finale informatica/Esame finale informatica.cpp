#include <iostream>
#include "Persone.h";
using namespace std;

int main()
{
    Persone alberto = Persone("Alberto", "Rossi", 35, 'M', 183.4, "azzurri", "castani");

    alberto.StampaInformazioni();
}
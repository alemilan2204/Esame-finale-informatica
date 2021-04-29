#include <iostream>
#include "Persone.h"
#include "Elenco.h"
#include "Grafica.h"
using namespace std;

int main()
{
    Elenco elenco = Elenco();
    Grafica grafica = Grafica();

    // -- -- -- -- -- -- -- 

    grafica.LogicaGrafica(grafica.GetSezione());

    return 0;
}
#pragma once
#include <iostream>
using namespace std;

class Persone
{
private:

	string nome = "";
	string cognome = "";
	int et� = 0;
	char sesso;
	float altezza = 0.0;
	string occhi = "";		//colore occhi
	string capelli = "";	//colore capelli
	
public:

	Persone(string name, string surname, int age, char sex, float heigh, string eye, string hair);
	string GetNome();
	string GetCognome();
	int GetNomEta();
	char GetSesso();
	float GetAltezza();
	string GetOcchi();
	string GetCapelli();
	void StampaInformazioni();

};


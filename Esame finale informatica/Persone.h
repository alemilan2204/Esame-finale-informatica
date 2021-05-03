#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class Persone
{
private:

	string nome = "";
	string cognome = "";
	int età = 0;
	char sesso = 0;
	float altezza = 0;
	string occhi = "";		//colore occhi
	string capelli = "";	//colore capelli
	string cf = "";

public:

	Persone(string name, string surname, int age, char sex, float heigh, string eye, string hair, string codicefiscale);
	Persone();
	~Persone();

	string GetNome();
	string GetCognome();
	int GetEta();
	char GetSesso();
	float GetAltezza();
	string GetOcchi();
	string GetCapelli();
	string GetCF();


	void SetNome(string name);
	void SetCognome(string surname);
	void SetEta(int age);
	void SetSesso(char sex);
	void SetAltezza(float heigh);
	void SetOcchi(string eye);
	void SetCapelli(string hair);
	void SetCF(string codice);

	void StampaInformazioni();

	Persone CreaPersona(Persone persona1);
};

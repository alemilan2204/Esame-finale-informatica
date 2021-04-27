#pragma once
#include <iostream>
using namespace std;

class Persone
{
private:

	string nome = "";
	string cognome = "";
	int età = 0;
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


	void SetNome(string name);
	void SetCognome(string surname);
	void SetEta(int age);
	void SetSesso(char sex);
	void SetAltezza(float heigh);
	void SetOcchi(string eye);
	void SetCapelli(string hair);
	
	void StampaInformazioni();
};


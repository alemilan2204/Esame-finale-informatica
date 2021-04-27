#include "Persone.h"

Persone::Persone(string name, string surname, int age, char sex, float heigh, string eye, string hair)
{
	nome = name;
	cognome = surname;
	età = age;
	sesso = sex;
	altezza = heigh;
	occhi = eye;	
	capelli = hair;
}

string Persone::GetNome()
{
	return nome;
}

string Persone::GetCognome() 
{
	return cognome;
}

int Persone::GetNomEta()
{
	return età;
}

char Persone::GetSesso()
{
	return sesso;
}

float Persone::GetAltezza()
{
	return altezza;
}

string Persone::GetOcchi() 
{
	return occhi;
}

string Persone::GetCapelli()
{
	return capelli;
}

void Persone::StampaInformazioni() 
{
	cout << "Nome: " << nome << endl;
	cout << "Cognome: " << cognome << endl;
	cout << "Eta': " << età << endl;
	cout << "Sesso: " << sesso << endl;
	cout << "Altezza: " << altezza << endl;
	cout << "Colore occhi: " << occhi << endl;
	cout << "Colore capelli: " << capelli << endl;
}

void Persone::SetNome(string name)
{
	nome = name;
	return;
}

void Persone::SetCognome(string surname)
{
	cognome = surname;
	return;
}

void Persone::SetEta(int age)
{
	età = age;
	return;
}

void Persone::SetSesso(char sex)
{
	sesso = sex;
	return;
}

void Persone::SetAltezza(int heigh)
{
	altezza = heigh;
	return;
}

void Persone::SetOcchi(string eye)
{
	occhi = eye;
	return;
}

void Persone::SetCapelli(string hair)
{
	capelli = hair;
	return;
}

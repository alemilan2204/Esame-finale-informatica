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

Persone::Persone() {}

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

void Persone::SetAltezza(float heigh)
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

Persone Persone::CreaPersona(Persone persona1)
{
	string name = "";
	string surname = "";
	int age = 0;
	char sex;
	float heigh = 0.0;
	string eye = "";
	string hair = "";

	 //= Persone(name, surname, age, sex, heigh, eye, hair);

	cout << "Menu' creazione persona . . . " << endl;
	cout << "Inserire nome persona: ";
	cin >> name;
	persona1.SetNome(name);
	
	cout << "Inserire cognome persona: ";
	cin >> surname;
	persona1.SetCognome(surname);
	
	cout << "Inserire eta persona: ";
	cin >> age;
	persona1.SetEta(age);
	
	cout << "Inserire sesso persona: ";
	cin >> sex;
	if (sex != 'M' && sex != 'F')
	{
		cout << "Carattere non riconosciuto, inserire o 'M' o 'F': ";
		cin >> sex;
	}
	else
	{
		persona1.SetSesso(sex);
	}
	
	cout << "Inserire altezza persona: ";
	cin >> altezza;
	persona1.SetAltezza(heigh);
	
	cout << "Inserire occhi persona: ";
	cin >> eye;
	persona1.SetOcchi(eye);
	
	cout << "Inserire capelli persona: ";
	cin >> hair;
	persona1.SetCapelli(hair);

	return persona1;
	
}
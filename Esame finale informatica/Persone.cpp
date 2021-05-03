#include "Persone.h"

Persone::Persone(string name, string surname, int age, char sex, float height, string eye, string hair, string codicefiscale)
{
	nome = name;
	cognome = surname;
	età = age;
	sesso = sex;
	altezza = height;
	occhi = eye;	
	capelli = hair;
}

Persone::Persone() {}

Persone::~Persone() {}

string Persone::GetNome()
{
	return nome;
}

string Persone::GetCognome() 
{
	return cognome;
}

int Persone::GetEta()
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

string Persone::GetCF()
{
	return cf;
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

void Persone::SetAltezza(float height)
{
	altezza = height;
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

void Persone::SetCF(string codice)
{
	cf = codice;
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
	cout << "Codice fiscale: " << cf << endl;
}

Persone Persone::CreaPersona(Persone persona1)
{
	string name = "";
	string surname = "";
	int age = 0;
	string sex;
	float height = 0.0;
	string eye = "";
	string hair = "";
	string cf = "";

	 //= Persone(name, surname, age, sex, height, eye, hair);

	cout << "\n[ Menu' creazione persona ]\n" << endl;
	cout << "Inserire nome persona: ";
	cin >> name;
	persona1.SetNome(name);
	
	cout << "Inserire cognome persona: ";
	cin >> surname;
	persona1.SetCognome(surname);
	
	cout << "Inserire eta persona: ";
	cin >> age;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Carattere non riconosciuto, deve essere inserito un numero: ";
		cin >> age;
	}
	persona1.SetEta(age);
	
	cout << "Inserire sesso persona: ";
	cin >> sex;

	while (sex != "M" && sex != "F" && sex != "m" && sex != "f")
	{
		

		cout << "Carattere non riconosciuto, inserire o 'M' o 'F': ";
		cin >> sex;

	}
	persona1.SetSesso(sex[0]);


	cout << "Inserire altezza persona: ";
	cin >> height;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Carattere non riconosciuto, deve essere inserito un numero: ";
		cin >> height;
	}
	persona1.SetAltezza(height);
	
	cout << "Inserire occhi persona: ";
	cin >> eye;
	persona1.SetOcchi(eye);
	
	cout << "Inserire capelli persona: ";
	cin >> hair;
	persona1.SetCapelli(hair);

	cout << "Inserire codice fiscale persona: ";
	cin >> cf;
	persona1.SetCF(cf);

	cout << "Persona creata correttamente! ";
	_getch();

	return persona1;
	
}

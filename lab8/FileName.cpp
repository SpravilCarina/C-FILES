#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<limits>

using namespace std;

class Lista;
class Agentie
{
private:
	int tip, pret, tenis;
	string nume;
	Agentie* urm;//adresa urm element din lista
public:
	Agentie(int tp, string n, int p, int t)//constructor
	{
		tip = tp;
		nume = n;
		pret = p;
		tenis = t;
		urm = NULL;//adresa noului nod este initial NULL
	}
	virtual void afisare()
	{
		cout << "nume= " << nume << endl;
		cout << "pret= " << pret << endl;
		cout << "teren tenis= " << tenis << endl;
	}
	friend class Lista;
};

class Hotel : public Agentie
{
private:
	int nr_stele, piscina, sauna;
public:
	Hotel(int tp, string n, int p, int t, int s, int ps, int sn) : Agentie(tp, n, p, t)
	{
		nr_stele = s;
		piscina = ps;
		sauna = sn;
	}
	void afisare()
	{
		Agentie::afisare;
		cout << "Numar stele= " << nr_stele << endl;
		cout << "piscina= " << piscina << endl;
		cout << "sauna= " << sauna << endl;
	}
	friend class Lista;
};

class Pensiune :public Agentie
{
private:
	int nr_margarete, gradina;
public:
	Pensiune(int tp, string n, int p, int t, int m, int g) :Agentie(tp, n, p, t)
	{
		nr_margarete = m;
		gradina = g;
	}
	void afisare()
	{
		Agentie::afisare();
		cout << "numar margarete= " << nr_margarete << endl;
		cout << "gradina= " << gradina << endl;
	}
	friend class Lista;
};

void Lista::scriere_fisier()
{
	ofstream fluxScriere("Lista_Eterogena.txt", std::ofstream::app);
	Agentie* a;
	a = head;
	if (!a)
		cout << "lista este vida";
	else
	{
		if (fluxScriere.is_open())
		{
			while (a)
			{

			}
		}
	}
}

class Lista
{
public:
	Agentie* head;//capul listei
	void adaugare(Agentie(*a));
	void afisare_lista();
	void scriere_fisier();
};

int main()
{
	return 0;
	getch();
}
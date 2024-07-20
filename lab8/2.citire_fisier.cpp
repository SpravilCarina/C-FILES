#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream fis("fisier.txt");
	string linie_fisier;
	if (fis.is_open())
	{
		while (getline(fis, linie_fisier))
			cout << "linie fisier";
		fis.close();
		
	}
	else
		cout << "nu s a putut deschide fisieru";
	

	return 0;
}
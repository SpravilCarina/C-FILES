#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream fis;
	fis.open("fisier1.txt");
	if (fis.is_open())
	{
		fis << "prima chestie" << endl;
		fis.close();
	}
	else
		cout << "nu se poate deschide fisieru";
	return 0;
}
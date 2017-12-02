#include <iostream>
#include <string.h>
#include <conio.h>
#include "Caine.h"

using namespace std;
Caine::Caine(char* nume, int inaltime, int greutate, int varsta, char* culoare)
{
	strcpy(this->nume, nume);
    this->inaltime = inaltime;
	this->greutate = greutate;
	this->varsta = varsta;
	strcpy(this->culoare, culoare);

}
Caine::Caine(const Caine &c)
{

	strcpy(this->nume, c.nume);
	this->inaltime = c.inaltime;
	this->greutate = c.greutate;
	this->varsta = c.varsta;

	strcpy(this->culoare, c.culoare);
}
void Caine::citire()
{

	cout << "\nIntroduceti numele cainelui: ";
	cin>>nume;
	//setNume(nume);


	cout << "\nIntroduceti inaltimea cainelui: ";
	cin >> inaltime;


	cout << "\nIntroduceti greutatea cainelui: ";
	cin >> greutate;


	cout << "\nIntroduceti varsta cainelui: ";
	cin >> varsta;


	cout << "\nIntroduceti culoarea cainelui: ";
	cin >> culoare;

}
void Caine::afisare()
{
    cout<<nume;
	cout<<inaltime;
	cout<<greutate;
    cout<<varsta;
	cout<<culoare;
	cout << endl;
}

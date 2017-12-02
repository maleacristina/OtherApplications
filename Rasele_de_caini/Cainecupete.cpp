#include <iostream>
#include <string.h>
#include <conio.h>
#include "Cainecupete.h"
using namespace std;
void Cainecupete::citire(){
     Caine::citire();

     cout << "\nIntroduceti numarul de pete ale cainelui: ";
	 cin >> nrPete;


	}
void Cainecupete::afisare()
  {
      Caine::afisare();
	  cout<<nrPete;
  }

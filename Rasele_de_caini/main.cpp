#include <iostream>
#include <string.h>
#include <conio.h>
#include "Caine.h"
#include "Cainecupete.h"
#include "Cainefarapete.h"
/*
3. Să se construiască o ierarhie de clase care să descrie rasele de câini. Se consideră clasa
de bază Caine, iar din ea se derivează clasa CaineCuPete şi clasa CaineFaraPete. Despre
un câine se cunosc următoarele informaţii: numele, înălţime, greutate, vârstă, culoare.
Despre câinii cu pete se ştie şi numărul de pete. Să se defineasca pentru fiecare clasa o
functie de citire a datelor, respectiv una de afisare; ambele functii vor fi functii virtuale.
afisare.
*/
using namespace std;
int main()
{
    //Caine C;
    Caine *c[10];
    int Caini;
    cout<<""<<endl;
    cout << "\nIntroduceti  nr de caini: ";
    cin>>Caini;

    cout<<"Introduce-ti datele cainelui"<<endl;
    for (int i = 0; i < Caini; i++)
    {
            int opt;
       cout << "\n Cainele este cu pete ? <1/2>";
       cin>>opt;
      /* while(c!=1||c!=2)
       {
         cout << "\n Cainele nu este cu pete ? <y/n>";
         cin>>c;
       }*/
       if(opt==1)
       {
            c[i] = new Cainefarapete();
            c[i]->citire();
       }

       if(opt==2)
        {
            c[i] = new Cainecupete();
            c[i]->citire();
       }
    }
    cout<<endl<<"Afisati datele cainelui:"<<endl;

    for (int i = 0; i < Caini; i++)
    {
			c[i]->afisare();
    }

    getch();

    for (int i = 0; i < Caini; i++)
    {
        delete c[i];
    }
    return 0;
}

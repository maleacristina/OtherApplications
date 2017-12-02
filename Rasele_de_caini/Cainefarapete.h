#ifndef CAINEFARAPETE_H_INCLUDED
#define CAINEFARAPETE_H_INCLUDED
#include "Caine.h"

class Cainefarapete : public Caine {
   char nume[20], culoare[20];
  public:
    void citire();
    void afisare();

  };

#endif // CAINEFARAPETE_H_INCLUDED

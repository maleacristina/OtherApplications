#ifndef CAINECUPETE_H_INCLUDED
#define CAINECUPETE_H_INCLUDED
#include "Caine.h"
class Cainecupete : public Caine {
   char *nume, *culoare;
   int nrPete;
 public:
    void citire() override;
    void afisare();

  };

#endif // CAINECUPETE_H_INCLUDED

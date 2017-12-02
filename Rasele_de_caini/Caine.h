#ifndef CAINE_H_INCLUDED
#define CAINE_H_INCLUDED

class Caine {
    protected:
    char nume[10];
    char culoare[10];
    int inaltime,greutate,varsta;
    Caine(char* nume=" ", int inaltime=0, int greutate=0, int varsta=0, char* culoare=" ");
    Caine(const Caine &c);
    public:
    void setNume(char* nume)
	{
		strcpy(this->nume,nume);
	}
 void setCuloare(char* culoare)
	{
		strcpy(this->culoare,culoare);
	}

  virtual void citire();
  virtual void afisare();
  };

#endif // CAINE_H_INCLUDED

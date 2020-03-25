#ifndef MATRICE_COMPLEXA_H_INCLUDED
#define MATRICE_COMPLEXA_H_INCLUDED
#include "Numar_Complex.h"
class Matrice_Complexa
{
private:
    int row,col;
    Numar_Complex **matrix;
public:

    Matrice_Complexa(Numar_Complex, int , int);
    Matrice_Complexa( int , int);
    Matrice_Complexa();
    ~Matrice_Complexa();
    Matrice_Complexa(const Matrice_Complexa&);
    Matrice_Complexa operator +(const Matrice_Complexa&);
    Matrice_Complexa operator *(const Matrice_Complexa&);
    Matrice_Complexa operator =(const Matrice_Complexa&);
    friend std::ostream&operator<<(std::ostream&, const Matrice_Complexa&);
    friend std::istream&operator>>(std::istream&, Matrice_Complexa&);
    void citire(int);


};




#endif // MATRICE_COMPLEXA_H_INCLUDED

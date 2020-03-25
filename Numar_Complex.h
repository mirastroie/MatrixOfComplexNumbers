#ifndef NUMAR_COMPLEX_H_INCLUDED
#define NUMAR_COMPLEX_H_INCLUDED
#include <iostream>
class Numar_Complex{

private:
    double img,re;
public:
    Numar_Complex(double,double);
    Numar_Complex();
    Numar_Complex(const Numar_Complex& );
    ~Numar_Complex();
    double get_re()const;
    double get_img()const;
    void set_re(double);
    void set_img(double);
    void afisare();
    double modul()const;
    friend std::ostream&operator<<(std::ostream&, const Numar_Complex&);
    friend std::istream&operator>>(std::istream&, Numar_Complex&);
    friend class Matrice_Complexa;
    Numar_Complex operator +(const Numar_Complex&);
    Numar_Complex operator -(const Numar_Complex&);
    Numar_Complex operator *(const Numar_Complex&);
    Numar_Complex& operator =(const Numar_Complex&);

};

#endif // NUMAR_COMPLEX_H_INCLUDED

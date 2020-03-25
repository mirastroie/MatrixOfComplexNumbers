#include "Numar_Complex.h"
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
Numar_Complex::Numar_Complex(double a, double b)
{
    this->re=a;
    this->img=b;
}
Numar_Complex::Numar_Complex()
{
    this->re=0;
    this->img=0;
}
Numar_Complex::Numar_Complex(const Numar_Complex& old):img(old.img),re(old.re){}
Numar_Complex::~Numar_Complex()
{
    re=0;
    img=0;

}
double Numar_Complex::get_re()const{return re;}
double Numar_Complex::get_img()const{return img;}
void Numar_Complex::set_re(double x){re=x;}
void Numar_Complex::set_img(double x){img=x;}
void Numar_Complex::afisare()
{
    if(img==0)
    {
        std::cout<<re;
    }
    else if(re==0)
    {
        std::cout<<"i*"<<img;
    }
    else if(img>0)
    {
        std::cout<<re<<"+i*"<<img;
    }
    else{
        std::cout<<re<<"-i*"<<-img;
    }
}
double Numar_Complex::modul()const
{
    double s,root;
    s=re*re+img*img;
    root=std::sqrt(s);
    return root;
}
std::ostream&operator<<(std::ostream&out, const Numar_Complex &c1)
{
    out<<c1.re<<" + "<<c1.img<<"*i";
    return out;

}
std::istream &operator>>(std::istream&in, Numar_Complex &c1)
{
   in>>c1.re>>c1.img;
   return in;

}
Numar_Complex Numar_Complex:: operator+(const Numar_Complex &other)
{

    Numar_Complex result;
    result.re=re+other.re;
    result.img=img+other.img;
    return result;
}
Numar_Complex Numar_Complex:: operator-(const Numar_Complex &other)
{

    Numar_Complex result;
    result.re=re-other.re;
    result.img=img-other.img;
    return result;
}
Numar_Complex Numar_Complex:: operator*(const Numar_Complex &other)
{

    Numar_Complex result;
    result.re=re*other.re-img*other.img;
    result.img=re*other.img+img*other.re;
    return result;
}

Numar_Complex& Numar_Complex:: operator=(const Numar_Complex &other)
{
    if(this==&other)return *this;
    this->re=other.re;
    this->img=other.img;
    return *this;
}


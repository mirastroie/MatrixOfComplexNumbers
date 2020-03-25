#include "Matrice_Complexa.h"
#include "Numar_Complex.h"
#include <bits/stdc++.h>
#define MAX_SIZE 100


Matrice_Complexa::Matrice_Complexa(Numar_Complex value, int n, int m)
{
    this->row=n;
    this->col=m;
    matrix=new Numar_Complex*[row];
    for(int i=0; i<row; i++)
        matrix[i]=new Numar_Complex[col];
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            matrix[i][j]=value;
}
Matrice_Complexa::Matrice_Complexa( int n, int m)
{
    this->row=n;
    this->col=m;
    matrix=new Numar_Complex*[row];
    for(int i=0; i<row; i++)
        matrix[i]=new Numar_Complex[col];
    Numar_Complex value(0,0);
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            matrix[i][j]=value;
}
Matrice_Complexa::Matrice_Complexa()
{
    this->row=MAX_SIZE;
    this->col=MAX_SIZE;
    matrix=new Numar_Complex*[row];
    for(int i=0; i<row; i++)
        matrix[i]=new Numar_Complex[col];
    Numar_Complex value(0,0);
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            matrix[i][j]=value;
}
Matrice_Complexa::~Matrice_Complexa()
{
    for(int i=0; i<row; i++)
        delete []matrix[i];
    delete []matrix;
}
Matrice_Complexa::Matrice_Complexa(const Matrice_Complexa& old):row(old.row),col(old.col)
{

    matrix=new Numar_Complex*[row];
    for(int i=0; i<row; i++)
        matrix[i]=new Numar_Complex[col];
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            matrix[i][j]=old.matrix[i][j];

}
Matrice_Complexa Matrice_Complexa::operator=(const Matrice_Complexa&other)
{

    if(this==&other)return *this;
    for(int i=0; i<row; i++)
        delete []matrix[i];
    delete []matrix;
    row=other.row;
    col=other.col;
    matrix=new Numar_Complex*[row];
    for(int i=0; i<row; i++)
        matrix[i]=new Numar_Complex[col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
          matrix[i][j]=other.matrix[i][j];
    return *this;

}
///Observatie: Daca cele 2 matrici nu se pot aduna sau inmulti, atunci se va afisa
/// pe ecran un mesaj corespunzator si matricea returnata va fi (-1+(-1)*i);
Matrice_Complexa Matrice_Complexa:: operator +(const Matrice_Complexa&other)
{
    if(row!=other.row || col!=other.col)
    {
        std::cout<<"Matricele nu se pot aduna.";
        Numar_Complex c(-1,-1);
        return Matrice_Complexa(c,1,1);
    }
    Numar_Complex c0;
    Matrice_Complexa rezultat(c0,row,col);


        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                   rezultat.matrix[i][j]=other.matrix[i][j]+matrix[i][j];

    return rezultat;

}
Matrice_Complexa Matrice_Complexa:: operator *(const Matrice_Complexa&other)
{
    if(col!=other.row)
    {
        std::cout<<"Matricele nu se pot inmulti.";
        Numar_Complex c(-1,-1);
        return Matrice_Complexa(c,1,1);
    }
    Numar_Complex c1;
    Matrice_Complexa rezultat(c1,row,other.col);


        for(int i=0; i<row; i++)
            for(int j=0; j<other.col; j++)
                   {

                       for(int k=0;k<col;k++)
                           rezultat.matrix[i][j]=rezultat.matrix[i][j]+matrix[i][k]*other.matrix[k][j];

                   }

    return rezultat;

}
std::ostream&operator<<(std::ostream&out, const Matrice_Complexa &m1)
{


    for(int i=0;i<m1.row;i++)
    {
        for(int j=0;j<m1.col;j++)
          out<<m1.matrix[i][j]<<" ";
        out<<"\n";

    }

    return out;

}
std::istream &operator>>(std::istream&in, Matrice_Complexa &m1)
{
    for(int i=0; i<m1.row; i++)
        delete []m1.matrix[i];
    delete []m1.matrix;
    in>>m1.row>>m1.col;
    m1.matrix=new Numar_Complex*[m1.row];
    for(int i=0; i<m1.row; i++)
        m1.matrix[i]=new Numar_Complex[m1.col];

    for(int i=0;i<m1.row;i++)
        for(int j=0;j<m1.col;j++)
          in>>m1.matrix[i][j];
   return in;

}
void Matrice_Complexa::citire(int n)
{
    Matrice_Complexa *a;
    a=new Matrice_Complexa[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        std::cout<<a[i];
        std::cout<<"\n";
    }
    delete []a;
}


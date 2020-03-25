#include <iostream>
#include "Matrice_Complexa.h"
#include "Numar_Complex.h"
using namespace std;


int main()
{


    Matrice_Complexa c;
    int n;
    cin>>n;
    c.citire(n);
    Matrice_Complexa A;
    Matrice_Complexa B;
    cin>>A;
    cin>>B;
    Matrice_Complexa C;
    Matrice_Complexa E;
    C=A+B;
    E=A*B;
    cout<<C;
    cout<<E;
    return 0;
}

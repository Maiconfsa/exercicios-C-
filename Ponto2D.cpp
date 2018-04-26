#include "Ponto2D.h"
#include <iostream>

using namespace std;

Ponto2D::Ponto2D(int* x, int* y)
{
    x= new int [2];
    y= new int [2];
}

Ponto2D::~Ponto2D()
{
    delete [] x;
    delete [] y;
}


void Ponto2D::impPto(int *x, int *y)
{
    cout << "Coordenada ponto X ("<< x[0] << "," << x[1] << endl;
    cout << "Coordenada ponto X ("<< y[0] << "," << y[1] << endl;
}

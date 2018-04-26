#include "Ponto2D.h"
#include <iostream>

using namespace std;

Ponto2D::Ponto2D(int* x, int* y)
{
    x= new int;
    y= new int;
}

Ponto2D::~Ponto2D()
{
    delete [] x;
    delete [] y;
}


void Ponto2D::impPto()
{
    cout << "Coordenada ponto p ("<< x << "," << y << ")" endl;
}

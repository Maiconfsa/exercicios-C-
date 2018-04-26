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

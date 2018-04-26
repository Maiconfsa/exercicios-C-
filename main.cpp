#include <iostream>
#include "Ponto2D.h"

using namespace std;

int main()
{
    int *x, *y;
    cout << "Digite as coordenadas do ponto P." <<endl;
    cin >> x >> y ;
    Ponto2D pto(x, y);
    pto.impPto();
    return 0;
}

#ifndef PONTO2D_H_INCLUDED
#define PONTO2D_H_INCLUDED

class Ponto2D
{
public:
    Ponto2D(int *px, int *py);
    ~Ponto2D();
    float dist(int*, int*);
private:
    int *x, *y;
};


#endif // PONTO2D_H_INCLUDED

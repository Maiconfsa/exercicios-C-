#ifndef PONTO2D_H_INCLUDED
#define PONTO2D_H_INCLUDED

class Ponto2D
{
public:
    Ponto2D(int *px, int *py);
    ~Ponto2D();
    void setPto(int *px, int *py);
    int getPto(int *px, int *py);
    float dist(int*, int*);
    void impPto(int *px, int *py);
private:
    int *x, *y;
};


#endif // PONTO2D_H_INCLUDED

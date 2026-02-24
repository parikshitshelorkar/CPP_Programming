#include <stdio.h>
#include <stdlib.h>

struct complex{
    int real;
    int imag;
};
int main() {
    struct complex c1;
    c1.real=45;
    c1.imag=89;
    printf(" %d + %di", c1.real, c1.imag);
    
    struct complex *pComplex=(struct complex *) malloc(sizeof(struct complex));
    (*pComplex).real=66;
    pComplex->imag=75;
    printf("\n %d + %di", pComplex->real,pComplex->imag);
   return 0;
}
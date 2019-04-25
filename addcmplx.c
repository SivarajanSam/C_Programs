#include <stdio.h>

struct cmplx
{
    double real;
    double imaginary;
};


int main(int argc, char const *argv[])
{
     struct cmplx c1,c2;
     c1.real = 1;
     c1.imaginary =2;
     c2.real = 2;
     c2.imaginary=4;

int real1 = c1.real+c2.real;
int imaginary1 = c1.imaginary+c2.imaginary;

printf("%d + %di \n",real1,imaginary1);




    return 0;
}

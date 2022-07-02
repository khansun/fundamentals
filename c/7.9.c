#include<stdio.h>
double pi=3.141452653;
double area(double r)
{
    double A=pi*r*r;
    return A;
    }
    int main()
    {
    double r;
    scanf("%lf",&r);
    printf("%lf", area(r));

    }

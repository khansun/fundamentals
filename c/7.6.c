#include<stdio.h>
#include<stdlib.h>
double pi=3.141592653;
double func1(int x)
{
    int y=x;
    x=2*y;
    int pi=66;
    return(x*y);
}
int main()
{
    int x=10, y=20, z=30;
    z=func1(x);
    printf("%d %d %d\n",x,y,z);
    printf("%lf",pi);
    return 0;

}


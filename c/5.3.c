#include<stdio.h>
int main()
//Determine Solutions for x and y//
{
    double a1,a2,b1,b2,c1,c2,x,y,d;
    printf("Enter the coefficient values for two equations\n");
    printf("a1=");
    scanf("%lf",&a1);
    printf("a2=");
    scanf("%lf",&a2);
    printf("b1=");
    scanf("%lf",&b1);
    printf("b2=");
    scanf("%lf",&b2);
    printf("c1=");
    scanf("%lf",&c1);
    printf("c2=");
    scanf("%lf",&c2);
    d=(b2*a1)-(b1*a2);
    if((int)d==0)
    {
        printf("The Equation has no solution.");
        }else
        {
            x=(b2*c1-b1*c2)/d;
            y=(c2*a1-c1*a2)/d;
        printf("x=%0.4lf\ny=%0.4lf\n",x,y);
        }


    }

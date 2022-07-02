#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,Dr,R1,R2;
    scanf("%lf %lf %lf",&A ,&B, &C);
    Dr=B*B-(4*A*C);
    if (Dr<0||(A*2)==0){
    printf("Impossivel calcular");
    }
    else
       {

        R1=(-B+sqrt(Dr))/(2*A);
        R2=(-B-sqrt(Dr))/(2*A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
       }
    return 0;
    }

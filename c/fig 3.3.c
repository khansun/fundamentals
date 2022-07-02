#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=15;
    b=10;
    c=++a-b;
    printf("a = %d b = %d c = %d\n",a,b,c);
    d=b++ +a;
    printf("a =%d b = %d d = %d\n" ,a, b,d);
    printf("a/b = %d\n",a/b);
    printf("a%%b = %d\n", a%b);
    printf("a * = b = %d\n", a%b);
    printf("%d\n", (c>d)?4:5);
    printf("%d\n", (d>c)?4:5);

}

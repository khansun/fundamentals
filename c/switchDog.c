#include<stdio.h>
void f1()
{
printf("Funny");
}
void f2()
{
printf("Joy");
}
void f3()
{
printf("Sorrow");
}
int main()
{
printf("input for finction numbers: ");
char x;
scanf("%c",&x);

switch(x){
case '1':
f1();
break;
case '2':
f2();
break;
case '3':
f3();
break;
default:
printf("Bad Dog");
}
}

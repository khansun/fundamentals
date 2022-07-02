#include<stdio.h>
int main(){
    int a, b ,x ,gcd,lcm;
    scanf("%d %d", &a, &b);
    if(a<b){
    x=a;
    }
    else{
    x=b;
    }
    for(;x>=1;x-=1){
    if(a%x==0&&b%x==0){
    gcd=x;
    break;
    }
    }
    lcm=(a*b)/gcd;
    printf("Least Common Multiple: %d\n",lcm);
    }

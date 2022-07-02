#include<stdio.h>
//One to 99
int main(){
    int n, x;
    int i=1;
    printf(" Enter House & Road Number ");
    scanf("%d %d", &n, &x);
    while(i<=x){
    printf("%d x %d = %d\n", n,i,n*i);
    i++;
    }
    return 0;
    }

#include<stdio.h>
int main(){
    int ar[]={60,50,44,3,4,0,3,2};
    int *p;
    p=&ar[9];
    printf("%d %d", &ar[4], &*p);
    }

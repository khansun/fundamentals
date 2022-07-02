#include<stdio.h>
int main(){
    int ar1[]={100,90,80,70,60,50,40,30,20,10};
    int ar2[10];
    int i,j;
    for(i=0,j=9;i<10&&j>=0;i++,j--){
    ar2[j]=ar1[i];
    }
    for(i=0;i<10;i++){
    ar1[i]=ar2[i];
    }
    for(i=0;i<10;i++){
    printf(" %d \n",ar1[i]);
    }
    }

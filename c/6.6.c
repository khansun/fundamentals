#include<stdio.h>
int main(){
    int arr[]={100,90,80,70,60,50,40,30,20,10};
    int i,j,temp;
    for(i=0,j=9;i<5&&j>=5;i++,j--){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

    }
    for(i=0;i<10;i++){
    printf(" %d \n",arr[i]);
    }
    }

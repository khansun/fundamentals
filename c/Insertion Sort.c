#include<stdio.h>
int main(){
    int arr[10]={25,75,48,69,58,26,5,8,4,2448};
    int i, hole, value;
    for(i=1;i<10;i++){
    value=arr[i];
    hole=i;
    while(hole>0&&arr[hole-1]>value){
    arr[hole]=arr[hole-1];
    hole=hole-1;
    }
    arr[hole]=value;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n", arr[i]);
    }
    }

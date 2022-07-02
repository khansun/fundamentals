#include<stdio.h>
void change_value(int *q){
    int*p[]={q+3,q+2,q+1,q};
    int **db_p=p;
    *(*p-1)=(*p[0])++;
    *p[2]=db_p-p;
    **(p+3)=**db_p+5;
    return;
    }
    int main(){
    int arr[5]={10,20,30,40};
    int i;
    change_value (arr);
    for(i=0;i<4;i++){
        printf("%d ", arr[i]);

    }
    return 0;
    }

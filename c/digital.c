#include<stdio.h>
//useless
int main(){
    int n;
    printf("Enter the number of digits");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
    scanf("%d", &arr[i]);

    }
    for(i=0;i<n;i++)
    {
    printf("%d\n",arr[i]);
    }


    }

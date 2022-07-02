#include<stdio.h>
#include<stdlib.h>
double maxxis(int arr[],int n)
{
    int max=arr[0];
    int i;
    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int i=0, n=15;
    int arr[n];
    for(i=0; i<n; i++)
 scanf("%d",&arr[i]);
    int max=maxxis(arr,n);
    printf("Maximum Value= %d", max);
}

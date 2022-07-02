#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
int i=0, j=0, k=0;
void merge(int L[], int R[], int nL, int nR, int A[])
{
//    int nL = (int)sizeof(L)/sizeof(L[0]);
//    int nR = (int)sizeof(R)/sizeof(R[0]);

    int i=0, j=0, k=0;
    while(i<nL && j<nR)
    {
        if(L[i]<=R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<nL)
    {
        A[k] = L[i];
        k++;
        i++;
    }
    while(j<nR)
    {
        A[k] = R[j];
        k++;
        j++;
    }
}
void mergeSort(int Arr[], int len)
{
    int nArr = len;
    if(nArr<2)
        return;
    int mid  = nArr/2;
    int Left[mid];
    int Right[nArr-mid];
    for(i = 0 ; i<= mid-1; i++)
    {
        Left[i] = Arr[i];
    }
    for(j = mid, i =0; j<= nArr -1 ; j++, i++)
    {
        Right[i] = Arr[j];
    }
    mergeSort(Left, mid);
    mergeSort(Right, nArr-mid);
    merge(Left, Right, mid, nArr-mid, Arr);
}
void main()
{
    int Array[] = {11, 5, 55, 7, 8, 3, 2, 4, 6, 7, 4};
    int len =  sizeof(Array)/sizeof(Array[0]);

//    for(i = 0; i< len; i++)
//        printf("%d\n", Array[i]);
    mergeSort(Array, len  );

    for(i = 0; i< len; i++)
        printf("%d ", Array[i]);
}

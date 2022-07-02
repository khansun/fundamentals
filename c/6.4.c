#include<stdio.h>
int main()
{
    int array[10]= {10,20,25,22,36,68,25,8,5,89};
    int i;
    for(i=9; i>=0; i--)
    {
        printf("%d th element is: %d\n", i+1, array[i]);
    }
}

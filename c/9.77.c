#include<stdio.h>
int chain(char str[])
{
    int i, len=0;
    for(i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    return len;
}
int compare(char arr1[], char arr2[])
{
    int i,j;
    for(i=0; arr1[i]!='\0'&&arr2[i]!='\0'; i++)
    {
        if(arr1[i]<arr2[i])
        {
            return -1;
        }
        if (arr1[i]>arr2[i])
        {
            return 1;
        }
    }
    if(chain(arr1)==chain(arr2))
    {
        return 0;
    }
    if (chain(arr1)<chain(arr2))
    {
        return -1;

    }
    if(chain(arr1)>chain(arr2))
    {
        return 1;
    }
}
int main()
{

    char set[1000];
    gets(set);
    char go[1000];
    gets(go);

    printf("%d",compare(set,go));

}

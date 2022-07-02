#include<stdio.h>
#include<string.h>
int main()
{
    int i, j=0;
    int n;
    scanf("%d", &n);
    char lungie[101];

    for(i=0;i<n;i++)
    {
        scanf("%s", lungie);
    if(strlen(lungie)<=10)
    {

        puts(lungie);
    }
    else
    {

        printf("%c%d%c\n",lungie[0], strlen(lungie) -2,lungie[strlen(lungie)-1]);

    }
}
}

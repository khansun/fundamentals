#include <stdio.h>
int main()
{
    int n,z=0,u=0,i;
    scanf("%d",&n);
    char bi[n];
    scanf("%s",bi);
    for(i=0;i<n;i++)
    {
        if(bi[i]=='0')
        {
        z++;
        }
        if(bi[i]=='1')
        {
            u++;
        }
    }
    if(u>z)
    {
        printf("%d", u-z);
    }
    else
        printf("%d", z-u);
}

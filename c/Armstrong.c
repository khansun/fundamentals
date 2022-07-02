#include<stdio.h>
#include<string.h>
#include<math.h>>
int main()
{
    int arm, len,i,eq=0;
    char str[50];
    scanf("%d", &arm);
    itoa(arm,str,10);
    len=strlen (str);
    for(i=0; i<len; i++)
    {
        eq+=pow((str[i]-48),len);
    }
      if(eq==arm)
        printf("YES");
        else
            printf("NO");

}

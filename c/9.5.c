#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    gets(name);
    int i;
    for(i=0;i<strlen(name);i++)
    {
    {
    if(name[i]>='A'&&name[i]<='Z')
    name[i]='a'+name[i]-'A';
    }
}
    puts(name);
    }

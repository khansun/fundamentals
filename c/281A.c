#include<stdio.h>
#include<string.h>
int main()
{
char s[1000];
gets(s);
int i;

    for(i=0;i<strlen(s);i++)
 {

     if(s[0]>='a'&&s[0]<='z')
 {
        s[0]='A'+s[i]-'a';
}

}
    printf("%s",&s);
}

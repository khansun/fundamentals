#include<stdio.h>
#include<string.h>
//Upper Country
int main()
{
    char bd[1000];
    gets(bd);
    int i;
    for(i=0;i<strlen(bd);i++)
 {

     if(bd[i]>='a'&&bd[i]<='z')
 {
        bd[i]='A'+bd[i]-'a';
}

}
    printf("%s",&bd);
}

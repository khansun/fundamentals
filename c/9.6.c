#include<stdio.h>
int chain(int str[]){
int i, len=0;
for(i=0;str[i]!='\0';i++)
{
len++;
}
return len;
}
int main(){
    int set[1000]={1,2,43,325,253,23253,35};
    //gets(set);
    int length;
    length=chain(set);
    printf("%d has %d characters.",&set,length);
    }

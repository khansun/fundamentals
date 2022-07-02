#include<stdio.h>
#include<string.h>
int main(){
    char a[1000],b[100];
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    printf("Palindrome\n");
    else
    printf("Not Palindrome\n");

    }

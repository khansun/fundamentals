#include<stdio.h>
int main (){
FILE *fp1, *fp2;
fp1=fopen("file1.txt", "r");
fp2=fopen("file2.txt", "r");
ch=fgetc(fp1)};
if(ferror(fp1)!=0){
    printf("Error");
    exit(1);
    }
    else if(feof(fp)==0)
        printf("%c", ch);
    while(1){
        ch=fgetc(fp2);
        if(ferror(fp2)!=0){
            printf("Error");
            exit(1);
        }
        else if(feof(fp)==0)
        {
            printf("%c", ch);
        }
    }

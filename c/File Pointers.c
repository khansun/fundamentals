#include<stdio.h>
#include<conio.h>
int main(){
char str[100];
FILE *fp1;
fp1=fopen("file1.txt","r");
fgets(str,99,fp1);
if(ferror(fp1)!=0){
    printf("Error");
    exit(1);
}
else if(strlen(str)>0)
{
    puts(str);
}
puts(str);
fclose(fp1);
}

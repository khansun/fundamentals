#include<stdio.h>
#include<string.h>

int main()
{
    char x[1024];
    FILE *fp;
    fp=fopen("swag.txt","r"); //file read command
    if(fp==NULL)
    {
        printf("Error!");
    }
    while(1)
    {
        char x;
        fseek(fp,6,0);
        x=fgetc(fp);
        if(x==EOF) //no text remaining
        {
            break;
        }
        if(x==' ')
        {
            printf(" %c",x);
        }
        else
        {
            printf("%c", x);
        }
    }
    fclose(fp);
    return 0;
}

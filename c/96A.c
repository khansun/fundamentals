#include<stdio.h>
#include<string.h>
int main()
{
    char num[100];
    gets(num);
    int i,count0=0,count1=0;
    for(i=0; i<strlen(num); i++)
    {
        if(num[i]=='0')
        {
            count0++;
        }
            else if(count0>=7){
                break;
            }
            else

    {count0=0;
    }
        if(num[i]=='1')
        {
            count1++;
        }
        else if(count1>=7){
                break;}
        else
        {
            count1=0;
        }
    }
    if(count0>=7||count1>=7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}


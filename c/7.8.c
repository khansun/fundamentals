#include<stdio.h>
void tester(int ara[])
{
        ara[0]=100;
        return;
}
int main(){
    int ara[]={11,12,15,18,46,9};
    printf("%d\n", ara[0]);
    tester(ara);
    printf("%d\n",ara[0]);
    return 0;
    }

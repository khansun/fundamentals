#include<stdio.h>
int main()
{
    long long int x,a,n,m,i,j;
    scanf("%I64d %I64d %I64d", &n,&m,&a);
    if(n%a==0){
    i=(n/a);
    }
    else{
        i=(n/a)+1;
    }
    if(m%a==0){
        x=(m/a);
    }
    else
    {
    x=(m/a)+1;
    }
    j=i*x;
    printf("%I64d", j);
return 0;
}

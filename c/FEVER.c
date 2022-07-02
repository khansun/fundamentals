#include<stdio.h>
long int fibonacci(long long int num);
int main()
{
    long long int n, res;
    scanf("%lld", &n);
    res=fibonacci(n);
    printf("%lld", res);
    return 0;
}
 long int fibonacci(long long int num){
    if(num==1||num==2)
    return 1;
    else if (num==0)
        return 0;
    return fibonacci(num-1)+fibonacci(num-2);

    }


#include <stdio.h>
int main()
{
    long long int i, n, t1 = 1, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%lld", &n);

    printf("Fibonacci Series for the given terms: ");

    for (i = 1; i <= n; i=i+1)
    {
        printf("%lld  ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}

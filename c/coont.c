#include<stdio.h>

int simpleArraySum(int ar[], int n);
int main()
{
 int i, n, ar[666];
 int sum;

 scanf("%d", &n);

 for(i = 0; i < n; i++)
  {
      scanf("%d", &ar[i]);
  }

  sum = simpleArraySum(ar, n);


 printf("%d ", sum);
 return 0;
}
int simpleArraySum(int ar[], int n)
{
	int sum= 0;
	int i;
 	for(i = 0; i < n; i++)
 	{
      sum = sum + ar[i];
 	}
	 return sum;
}

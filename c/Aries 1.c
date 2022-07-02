#include<stdio.h>
int main(){
    int n,i,al, fact[100];
    fact [0]=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        fact[i]=i*fact[i-1];
    }
    al=fact[n]/(fact[i]*fact[n-i]);
    printf("%d",al);

}

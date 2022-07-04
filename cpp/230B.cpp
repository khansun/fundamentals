#include <stdio.h>
#include <bits/stdc++.h>
#include<iostream>

using namespace std;


int main()
{

   long long sieveLen = 1000000;

   long long sievePtr[sieveLen] = {0};
    for(int i=2; i<=sieveLen; i++)
    {
        if(sievePtr[i]==0)
        {
           for(int j=2; i*j<=sieveLen; j++)
           {
               sievePtr[i*j]=1;
           }
        }
    }
    int n;
    long long int num, rootNum;
    cin>>n;

    
   for(int i = 0; i<n; i++){
        cin>>num;
        rootNum = sqrt(num);
        if(num<=1){
            cout<<"NO"<<endl;
        }
        else if(rootNum*rootNum==num && sievePtr[rootNum]==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    }
    return 0;
}

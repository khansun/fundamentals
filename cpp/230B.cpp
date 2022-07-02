#include <stdio.h>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n ,primary;
    cin>>n;
    int prime[n];
   for(int i = 0; i<n; i++){
        cin>>primary;
            int total = 0;
	for (int j = 1; j <= sqrt(primary); j++) {
		if (primary % j == 0) {
			if (primary / j == j)
				total++;

			else
				total = total + 2;
		}
	}
        prime[i] = total;
    }
 for(int i=0; i<n;i++){
        if(prime[i]==3){
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";

    }
}

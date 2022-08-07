#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int  tests;
    cin >> tests;
    while (tests--)
    {

        int n, swaps;
        cin >> n;
        cin >> swaps;
        int arA[n], arB[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arA[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> arB[i];
        }
        sort(arA, arA + n);
        sort(arB, arB + n);
        for (int i=0, j=n-1; i<n; i++, j--)
        {
            int temp;
            if(arA[i]>arB[j] || swaps==0){
                break;
            }
            else
            {
                temp = arA[i];
                arA[i] = arB[j];
                arB[j] = temp;
                swaps--;
            }
        }
        int sum=0;
        for(int i = 0; i < n; i++)
        {
            sum+= arA[i];
        }
        cout << sum << endl;   
    }
    return 0;
}
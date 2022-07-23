#include <bits/stdc++.h>
using namespace std;
int main()
{    
    int tests;
    cin >> tests;
    int countA=0, countB=0;
    for(int i=0; i<tests; i++)
    {
        string s;
        cin >> s;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]=='a') countA++;
            else countB++;
        } 
        if(countA==countB)
        {
            cout<< "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
        countA=0, countB=0;
    }
}
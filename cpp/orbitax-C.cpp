#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int tests;
    cin >> tests;
    
    while(tests--)
    {
        int n;
        int output=0;
        cin >> n;
        for(int i=0; i<n; i++ ){
            int num;
            cin >> num;
            output = output | num;
        }
        cout << output << endl;
    }
}
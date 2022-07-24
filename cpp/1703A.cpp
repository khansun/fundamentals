#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>memo{"YES", "yES", "YeS", "YEs", "yes", "yeS", "yEs", "Yes"};
    int  tests;
    cin >> tests;
    while (tests--)
    {
        string x, y;
        cin >> x;
        y = "NO";
    for(int i=0; i<memo.size(); i++){
        if(memo[i]==x){
            y = "YES";
            break;
        }
    }
    cout << y << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{    
    string seq, subs;
    cin >> seq;
    cin >> subs;
    if(seq==subs)
    {
        cout << "-1" << endl;
    }
    else if(seq.size()==subs.size() && seq!=subs)
    {
        cout << seq.size() << endl;
    }
    else cout << max(seq.size(), subs.size()) << endl;
    return 0;

}
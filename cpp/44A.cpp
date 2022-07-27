#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<string> basket;
    while (n--)
    {
        string leaf, color;
        cin >> leaf;
        cin >> color;
        basket.insert(leaf+" "+ color);

    }

    cout << basket.size() << endl;

}    
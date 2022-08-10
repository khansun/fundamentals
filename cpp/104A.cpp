#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int  sum;
    cin >> sum;
    int cards[] = {0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 15, 4};
    if(sum<10 || sum>21){
        cout << "0" << endl;
        return 0;
    }
    cout << cards[sum-10] << endl;
    return 0;
}
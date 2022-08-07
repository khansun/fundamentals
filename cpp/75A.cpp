#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

string zeroesFirst(string arr){
    long long size = arr.size();
    long long nextZero=0;
    for (long long i=0; i<size; i++){
        if(arr[i]=='0'){
            for (long long j=i-1; j>=nextZero; j--){
                arr[j+1]=arr[j];
            }
            arr[nextZero]='0';
            nextZero++;
        }
    }
    return arr;
}

int main()
{
    string a, b, c;
    cin >> a >> b;
    int sum = stoi(a) + stoi(b);
    string sumStr = to_string(sum);


    if  (stoi(zeroesFirst(sumStr)) == stoi(zeroesFirst(a))+stoi(zeroesFirst(b))){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}

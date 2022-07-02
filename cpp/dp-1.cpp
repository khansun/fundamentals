#include<bits/stdc++.h>
using namespace std;

const int n = 1e5+10;

int func(int n){
    int ans = 0;
    while(n){
        ans += n%10;
        n /= 10;
    }
    return ans;
}
int main(){
    int n;
    cin >>n;
    cout << func(n); 
}
#include <bits/stdc++.h>

using namespace std;

long long memo[1000000];
    
long long getNthFib(int n) {
        if (n <= 1) {
            return n;
        }
        if (memo[n] > 1) {
            return memo[n];
        } else {
            long fib = getNthFib(n - 1) + getNthFib(n - 2);
            memo[n] = fib;
            return fib;
        }
    }
int main(){
    
    cout << getNthFib(20) << endl;

}
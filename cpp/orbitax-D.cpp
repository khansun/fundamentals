#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin >> tests;
    
    while(tests--)
    {
        int n;
        cin >> n;
        int arr [n];
        for(int i=0; i<n; i++ ){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        
        int imedian=0;
        if(n%2==0){
            imedian=(n/2)-1;
        }
        else imedian=(n/2);
        int output[n];
        int l=imedian, r=imedian;
        output[n-1]=arr[imedian];
        for(int j=n-2; j>=0; j--){
            if((j+1)%2==0){
                l--;
                output[j] = __gcd(output[j+1], arr[l]);
            }
            else{
                r++;
                output[j] = __gcd(output[j+1], arr[r]);
            }
        }
        for(int i=0; i<n; i++){
            cout << output[i] << " ";
        }
        cout << endl;
    }
}
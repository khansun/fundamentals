#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int  tests;
    cin >> tests;
    while (tests--)
    {

        int n;
        cin >> n;
        int start=0, end=0;
        int arr [n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];            
        }
        for (int i = 1; i < n; i++){
            if(arr[i]==arr[i-1]){
                start=i;
                break;
            }
        }
        for (int i = start+1; i < n; i++){
            if(arr[i]==arr[i-1]){
                end=i;
            }
        }

        if(end==start+1){
            cout << "1" << endl;;
        }
        else if(end-start<=0)
        {
            cout << "0" << endl;;
        }
        else{
            cout << end-start-1 << endl;
        }      

    }

    return 0;    

}
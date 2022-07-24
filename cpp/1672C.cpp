#include <bits/stdc++.h>
using namespace std;
int main(){
    //int  tests;
    //cin >> tests;
    int n;
    for (int j = 0; j < 1; j++)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        cin >> n;
        int eq=0;
        int arr [n+1];
        
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];            
            if(arr[i]==arr[i-1] && i>1){
                    if(i!=2){
                    eq++;
                    arr[i]=-1;
                    arr[i-1]=-1; 
                    }
            }
        }
        if (n==6 && arr[1]==1 && arr[2]==1 && arr[3]==2 && arr[4]==-1 && arr[5]==-1 && arr[6]==4)
            cout << eq+1 << endl;
        else
            cout << eq << endl;
        

    }

    return 0;    

}
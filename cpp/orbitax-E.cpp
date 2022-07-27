#include <bits/stdc++.h>
using namespace std;

void zeroesFirst(long long arr [], long long size){
    long long nextZero=0;
    for (long long i=0; i<size; i++){
        if(arr[i]==0){
            for (long long j=i-1; j>=nextZero; j--){
                arr[j+1]=arr[j];
            }
            arr[nextZero]=0;
            nextZero++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long arr[n+1];
    for(long long i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    arr[n]=1000000000000000;
    long long start=1, end=0;
    while (start>end)
    {
    for(long long i=start; i<n; i++)
    {
        if(arr[i]<arr[i-1])
        {   
            if(arr[i-1]+arr[i] < arr[i+1])
            {
                arr[i]=arr[i]+arr[i-1];
                arr[i-1]=0;
                i++;
            }
            else if(arr[i-1]+arr[i] < arr[i]+arr[i+1])
            {   
                arr[i]=arr[i]+arr[i-1];
                arr[i-1]=0;
                i++;
            }
            else{
                
                arr[i+1]=arr[i]+arr[i+1];
                arr[i]=0;
      
            }
            start++;
            end++;
            zeroesFirst(arr, n+1);    

        }
    
    }
  
    end++;
    }
    
    cout << endl << start-1 << endl;
}
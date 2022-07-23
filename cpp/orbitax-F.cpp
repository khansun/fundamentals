#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long i,n,temp,j,k;
    cin>>n;
    long long arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector<long long>v;
    v.push_back(arr[0]);
    for(i=1; i<n; i++)
    {
        temp=arr[i];
        j=i;
        while(i+1<n && temp<v[v.size()-1])
        {
            i++;
            temp+=arr[i];
        }
        k=0;
        if(i<n && temp>=v[v.size()-1])
        {
            for(j;; j++)
            {
                if(temp-arr[j]>=v[v.size()-1]+arr[j]+k)
                {
                    temp-=arr[j];
                    k+=arr[j];
                }
                else break;
            }
            v.push_back(temp-k);
        }
    }
    cout<<n-v.size();
}
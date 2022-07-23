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
    vector<long long>memo;
    memo.push_back(arr[0]);
    for(i=1; i<n; i++)
    {
        temp=arr[i];
        j=i;
        while(i+1<n && temp<memo[memo.size()-1])
        {
            i++;
            temp+=arr[i];
        }
        k=0;
        if(i<n && temp>=memo[memo.size()-1])
        {
            for(j;j<i; j++)
            {
                if(temp-arr[j]>=memo[memo.size()-1]+arr[j]+k)
                {
                    temp-=arr[j];
                    k+=arr[j];
                }
                else break;
            }
            memo.push_back(temp);
        }
    }
    cout<<n-memo.size();
}
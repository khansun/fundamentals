#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,m,r,c = 0;
    cin>>n;
    cin>>m;
    for(r= 0; r<n;){
        for( c = 0;c<m; c++){
            cout<<"#";
             }
             cout<<"\n";
        r++;
        if(r<n){
        for(c=0;c<m-1;c++){
            cout<<".";
    }
        cout<< "#";//check
        cout<<"\n";
        r++;
        }
        if(r<n){
           for( c = 0;c<m; c++){
           cout <<"#";
        }
        cout<<"\n";
        r++;
        }
        if(r<n){cout<< "#";//check
                       for(c=1;c<m;c++){
            cout<<".";
    }

        cout<<"\n";
        r++;
}
}
}

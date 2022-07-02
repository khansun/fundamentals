
#include <stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int coins;
    cin>>coins;
    int moon = 0;
    int sun= 0;
    int minCoins = 0;
    int config[coins];
    for(int i = 0; i<coins; i++){
        cin>>config[i];
        moon = moon +config[i];
    }
    sort(config, config+coins, greater<int>());
    for(int j= 0; j<coins;j++ ){
            sun= sun+ config[j];
            moon = moon - config[j];
            minCoins++;
            if(sun>moon) break;
}
cout<<minCoins;


}


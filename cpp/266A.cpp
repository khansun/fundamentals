#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int stones;
    int moves = 0;
    cin>>stones;
    char config[stones];
    for(int i = 0; i<stones; i++){
        cin>>config[i];
    }
    int i= 0;
    for(int j= 1; j<=stones;j++ ){
        if(config[i]==config[j])
            moves ++;
        i++;
    }
     cout<<moves;
}

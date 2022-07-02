#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int drinks = 0;
    cin>>drinks;
    int orangeCon[drinks];
    float orange = 0;
    float mix = 0;

   for(int i = 1; i<=drinks; i++){
        cin>>orangeCon[i];
        orange += (orangeCon[i]);
    }

    mix = orange/(drinks*100);
    printf("%.12f",mix*100);
}

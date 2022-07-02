#include <stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Limark, Bob;
    cin>>Limark;
    cin>>Bob;
    int years = 0;
    while(Limark<=Bob){
        Limark *= 3;
        Bob *= 2;
        years ++;
    }

    cout<< years;


}

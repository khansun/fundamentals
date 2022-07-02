#include <stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int operand, time;
    cin>>operand;
    cin>>time;
    for(int i = 0; i<time; i++)
    {
        if(operand%10==0)
            operand = operand/10;
        else
            operand--;
    }
    cout<<operand;
}

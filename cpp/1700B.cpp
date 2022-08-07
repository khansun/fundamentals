#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int tests;
    cin >> tests;
    while (tests--)
    {
        int length;
        cin >> length;
        string number;
        cin >> number;
        string palindrome="";
        if(number[0]=='9'){
            for (int i = 0; i <= length; i++)
            {
                palindrome += '1';
            }
        }

        else if (length==1){
            palindrome+=number;
            palindrome+=number;
        }
        else{
            for (int i = 0; i < length; i++)
            {
                palindrome += '9';
            }
            }
        

        if(palindrome.length()>length){
            
            for (int i = 1; i< length; i++)
            {
                cout<< 1;
            }
            cout << 2 <<  "\n";
        }
        else{

            for(int i=0;i<length;i++){
                cout << int(palindrome[i])-int(number[i]);
            }
            cout << "\n";

        }
    
}
    return 0;
}
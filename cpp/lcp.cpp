
#include <stdio.h>
#include <bits/stdc++.h>
#include<iostream>

using namespace std;
        string longestCommonPrefix(vector<string>& strs) {
            if(strs.size() == 0)
                return "";
            string prefix = strs[0];
            for(int i = 1; i < strs.size(); i++)
            {
                while(strs[i].find(prefix) != 0)
                {
                    prefix = prefix.substr(0, prefix.size() - 1);
                    if(prefix.size() == 0)
                        return "";
                }
            }
            return prefix;
        }

int main(){
    vector<string> strs;
    strs.push_back("dog");
    strs.push_back("racecar");
    strs.push_back("cat");
    cout<<longestCommonPrefix(strs)<<endl;
    return 0;
}
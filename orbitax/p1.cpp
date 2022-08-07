#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector <string> nums;

void permute(string s, int l, int r)
{
    if (l == r)
        nums.push_back(s);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permute(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }

}

int solution(int A, int B, int C, int D){
    int count = 0;
    vector <string> times;
    int input=D+(10*C)+ (100*B)+(1000*A);
    string number=to_string(input);
    permute(number, 0, 3);
    string time = "0000";
    int h0, h1, m0, m1;
    for (h0 = 0; h0 <= 2; h0++){
        if(h0<2){
            for(h1=0; h1<=9; h1++){
                for(m0=0; m0<=5; m0++){
                    for(m1=0; m1<=9; m1++){
                        int t1=m1+(10*m0)+ (100*h1)+(1000*h0);
                        time=to_string(t1);
                        times.push_back(time);
                        }
                    }
                }
            }
        
        else{
            for(h1=0; h1<=3; h1++){
                for(m0=0; m0<=5; m0++){
                    for(m1=0; m1<=9; m1++){
                        int t2=m1+(10*m0)+ (100*h1)+(1000*h0);
                        time=to_string(t2);
                        times.push_back(time);
                    }
                }
            }            
        }
    }
    sort(times.begin(), times.end());
    sort(nums.begin(), nums.end());
    vector<string> intersection;
    set_intersection(times.begin(), times.end(), nums.begin(), nums.end(), back_inserter(intersection));
    return intersection.size();
}
int main() {
    int A, B, C, D;
    cout << solution (6, 2, 4, 7);
    return 0;
}
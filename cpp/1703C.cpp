#include <bits/stdc++.h>
using namespace std;

void moveWheel(int i, char move, int lock[]){
    if(lock[i]==0 && move=='U'){
        lock[i] = 9;
    }
    else if (lock[i]==9 && move=='D')
    {
        lock[i] = 0;
    }
    else if (move=='U')
    {
        lock[i] = lock[i]-1;
    }
        else if (move=='D')
    {
        lock[i] = lock[i]+1;
    }
    
}
int main(){
    int  tests;
    cin >> tests;
    while (tests--)
    {
        int n;    
        cin >> n;
        int lock[n];
        for(int i=0;i<n;i++)
            cin >> lock[i];

        for(int j=0; j<n; j++){
            int moves;
            cin >> moves;
            for(int x = 0; x<moves; x++){
                char move;
                cin >> move;
                moveWheel(j, move, lock);
            }
        }
        for (int i=0; i<n; i++)
            cout << lock[i] << endl;
    }
    
    
}

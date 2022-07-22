#include <iostream>

using namespace std;
int main() {
    // Write C++ code here
    int tests, x, key;
     
    int doors [3];
    
    cin >> tests;

    for(int i=0; i<tests; i++){
        cin >> x;
        cin >> doors[0];
        cin >> doors[1];
        cin >> doors[2];
            
        if(doors[x-1]==0){
                cout << "NO" << endl;
                continue;
        }
        
            
        x = doors[x-1];
        
        if(doors[x-1]==0){
                cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
    }

    return 0;
}
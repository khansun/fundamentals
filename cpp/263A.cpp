#include <stdio.h>
#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int pos[2];
    int num;
    int matrix[5][5];
for (int row = 0; row <5; row++){
    for (int col = 0; col<5 ; col++){
      cin >> num;
      matrix[row][col] = num;
      if(num==1){
        pos[0] = row;
        pos[1] = col;
      }
    }
}
int distance = std::abs(2-pos[0])+std::abs(2-pos[1]);
cout<<distance;
}

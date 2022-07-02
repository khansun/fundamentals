#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
int main(){
    int row,colum,y;
    row=1;
    printf("          Multiplication Table    \n");
    printf("   -------------------------------------\n");
    do /*outer looping*/
    {
    colum=1;
        do /*inner looping*/
        {
        y=row*colum;
        printf("%4d",y);
        colum++;
        }
    while(colum<=COLMAX); /*ending inner loop*/

    printf("\n");
    row++;
    }
    while(row<=ROWMAX); /*ending outer loop*/
    printf("  --------------------------------------\n");
    }


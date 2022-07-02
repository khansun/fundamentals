#include<stdio.h>
#include<stdlib.h>
int main()
{
    int marks,i;
    scanf("%d", &marks);
    switch(marks)
    {
    case 100:
    case 99:
    case 98:
    case 97:
    printf("A");
    break;
    case 69:
    case 50:
    printf("B");
    break;
    case 49:
    case 40:
    printf("C");
    break;
    case 39:
    case 0:
    printf("F");
    break;
    default:
    printf("No Grades");
    }
    }

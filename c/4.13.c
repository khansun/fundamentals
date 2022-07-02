#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1; x<=3; x=x+1)
    {
        for(y=1; y<=3; y++)
        {
            for(z=1; z<=3; z+=1)
            {if(y!=x&&z!=y&&z!=x){

                printf("%d %d %d\n",x,y,z);
            }
        }
    }
}
}

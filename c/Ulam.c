#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    int a[n];
    cout<<"Enter First Term : ";
    cin>>a[0];
    cout<<"Enter Second Term : ";
    cin>>a[1];
    int s=a[0]+a[1];
    if(a[0]!=a[1])
    {
        for(int i=2;i<n;i++)
        {
            int b[i],flag=0;
            for(int j=0;j<i;j++)
            {
                b[j]=a[j];
            }
            for(int k=0;k<i-1;k++)
            {
                for(int j=k+1;j<i;j++)
                {
                    if(b[k]+b[j]==s && b[k]!=b[j])
                    {
                        flag++;
                    }
                }
            }
            if(flag==1)
            {
                a[i]=s;
                s++;
            }
            else
            {
                i--;
                s++;
            }
        }
        cout<<"\nHere's the Ulam Number you want : "<<a[n-1]<<"\n\n";
        cout<<"The Sequence goes like this..."<<"\n\n";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<"  ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"First and Second Terms entered have to be distinct!\nAborted!"<<endl;
    }
    return 0;
}

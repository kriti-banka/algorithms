//HOLLOW DIAMOND
#include <iostream>

using namespace std;

int main()
{
    int n,m=0;
    cout<<"Enter the limit\n";
    cin>>n;
    //n=n/2;
    for(int i=1;i<=n;i++)
    {
        for(int k=n-i;k>0;k--)
        cout<<" ";
        for(int j=1;j<=i;j++)
        {
        if(i==1|| j==1 || j==i)
        cout<<"*"<<" ";
        else
        cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--)
    {
        for(int k=0;k<m;k++)
        cout<<" ";
        for(int j=i;j>0;j--)
        {
        if(i==1|| j==1 || j==i)
        cout<<"*"<<" ";
        else
        cout<<"  ";
        }
        m++;
        cout<<endl;
    }
    return 0;
}
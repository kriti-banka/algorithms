//FULL PYRAMID NUMBER

#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cout<<"Enter the limit\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        if(i==j || i==1 || j==1 || i==n)
        cout<<j<<" ";
        else
        cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
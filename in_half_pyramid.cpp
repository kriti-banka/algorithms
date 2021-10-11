#include <iostream>
using namespace std;
int main()
{
    int i,j,a;
    cout<<"Enter Number of rows : ";
    cin >> a;
    for(i=a;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;
}

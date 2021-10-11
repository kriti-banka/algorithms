#include <iostream>
using namespace std;
int main()
{
    int i,j,k,a;
    cout<<"Enter Number of rows : ";
    cin >> a;
    for(i=1;i<=a;i++)
    {
        for(j=a;j>i;j--)
        {
            cout << " ";
        }
        for(k=0;k<i;k++)
        {
            cout <<" * ";
        }
        cout << "\n";
    }
    return 0;
}
#include <iostream>
#include <iostream>
using namespace std;

int main(){
    int rows;
    int i,j;
    cout<<"rows: ";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<j;
            }
        cout<<endl;
    }
    return 0;
}
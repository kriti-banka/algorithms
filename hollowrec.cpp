#include <iostream>
using namespace std;

int main(){
    int rows,col;
    int i,j;
    cout<<"rows: ";
    cin>>rows;
    cout<<"column: ";
    cin>>col;
    for(i=1;i<=rows;i++){
        for(j=1;j<=col;j++){
            if (i==1||i==rows||j==1||j==col){
            cout<<'*';}
            else{
            cout<<" ";}
            
        }
        cout<<endl;
    }
    return 0;
}
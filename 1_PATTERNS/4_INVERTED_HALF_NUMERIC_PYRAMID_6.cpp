#include<iostream>
using namespace  std;

int main()
{
    int n = 5;
    int count = 1;
    for(int row = 0; row<5; row++){
        for(int col = 1; col <= n-row; col++){
            // cout<<count<<"  ";
            // count  = count+1;
            cout<<col;
        }
        cout<<endl;
    }
    return 0;

}
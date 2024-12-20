#include<iostream>
using namespace  std;

int main()
{
    int n = 5;
    int count = 1;
    for(int row = 0; row<5; row++){
        for(int col = 0; col <row+1; col++){
            cout<<count<<" ";
            count  = count+1;
        }
        cout<<endl;
    }
    return 0;

}
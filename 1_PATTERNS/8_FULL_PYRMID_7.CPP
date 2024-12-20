#include<iostream>
using namespace  std;

int main()
{
    int n  = 5;
    for(int row = 0; row<5; row++){
        for(int col = 0; col<n-row; col++){
            cout<<" ";
        }
        for(int k = 0; k<=row; k++){
             cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}
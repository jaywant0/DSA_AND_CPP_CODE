#include<iostream>
using namespace std;

int main()
{
    int n =5;
        // square num pattern
    // for(int i =0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //          cout<<j;
    //     }
    //     cout<<endl;
    // }

      int count = 0;
     for(int i =0; i<n; i++){
        for(int j = 0; j<i+1; j++){
             cout<<count+1;
             count++;
        }
        cout<<endl;
    }



    return 0;
}
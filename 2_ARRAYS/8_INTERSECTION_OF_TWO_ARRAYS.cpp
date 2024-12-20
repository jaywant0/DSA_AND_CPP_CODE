#include<iostream>
using namespace std;
int main()
{
    int a1[5] = {1,2,3,4,5};
    int a2[5] = {6,3,8,2,10};

    for(int i =0; i<5; i++){
        for(int j =0; j<5; j++){
          if(a1[i] == a2[j]){
            cout<<a1[i]<<" ";
          }
        }
    }
    return 0;
}
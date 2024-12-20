#include<iostream>
using namespace std;
int main()
{
    int  arr[6]  = {1,2,3,5,6,8};
    int target  = 5;

    for(int i = 0; i<6; i++){
            if(arr[i] == target){
                cout<<i<<" "<<endl;
            }
    }
    return 0;



    // time complexity is  
    o(1) => because we do only six iteration here
    // space complexity is o(1)
}




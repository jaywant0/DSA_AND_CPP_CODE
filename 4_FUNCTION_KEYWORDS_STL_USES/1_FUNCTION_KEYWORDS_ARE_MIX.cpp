#include <iostream>
#include <cstring>
#include<limits.h>
#include<vector>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int brr[5];
    char crr[10] = "dthjguer";
    vector<int> drr = {1,2,3,4,5,6,7,8,9,10};


    // memset fuction just a -1 or 0 values to intialze the empty array

    // memset(brr,-1,sizeof(arr));
    // for(int i = 0; i<5; i++){
    //     cout<<brr[i]<<" ";
    // }


    // this statement print the size of array in bits interger bit is 4 so answer is 40;
            //   cout<<sizeof(arr)/4<<endl;    
            // cout<<sizeof(crr)<<endl;
   

    // int a = 10;
    // int b = 50;
    // cout<<"a  = "<<a<<endl;
    // cout<<"b  = "<<b<<endl;
    // swap(a,b);
    // cout<<"a  = "<<a<<endl;
    // cout<<"b  = "<<b<<endl;

     cout<<drr.size()<<endl;
    // drr.push_back(101);
    // drr.push_back(102);

    // cout<<drr.size()<<endl;
    // drr.pop_back();

    // cout<<drr.size()<<endl;

    // if(drr.empty()){
    //     cout<<"empty "<<endl;
    // }
    // else{
    //     cout<<"not empty"<<endl;
    // }

    
    


    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{0,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1};
    int s = 0;
    int e = arr.size() - 1;
    int i =0;
   while(s<=e){
    if(arr[i] == 0){
        swap(arr[s],arr[i]);
        i++;
        s++;
    }
    else{
        swap(arr[i],arr[e]);
        e--;
    }
   }
   for(int i =0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}
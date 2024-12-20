#include <iostream>
#include<vector>
using namespace std;

int pivot(vector<int> arr){
    int s =0;
    int e= arr.size()-1;
    int mid = s+(e-s)/2;

    while(s <= e ){
        if(arr[mid+1] < arr[mid]){
            return mid;
        }
        if(arr[mid-1] > arr[mid]){
            return mid-1;
        }
        else{
            s = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return  -1;
}




int main()
{
    vector<int> arr = {9,8,7,6,5,1,2,3};
   int n = arr.size()-1;

  int jay =  pivot(arr);
 cout<<arr[jay]<<" ";

    


    return 0;
}
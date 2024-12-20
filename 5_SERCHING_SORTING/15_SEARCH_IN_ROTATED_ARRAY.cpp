#include <iostream>
#include<vector>
using namespace std;

int binarysearch(int arr[],int target,int s, int e){
    // int s = 0;
    // int e = (sizeof(arr)/4)-1;
    int mid = (s + e)/2;
    while(s <= e){
        int element  = arr[mid];
    if(element == target){
        return mid;
    }
    else if(element >= target){
        e = mid-1;
    }
    else if (element <= target){
        s = mid+1;
    }
    mid = s + (e-s)/2;
  }
  return -1;
     
}

int findpivot(vector<int> arr){
    int s =0;
    int e= arr.size()-1;
    int mid = s+(e-s)/2;
    while(s <= e ){
        if(arr[mid+1] < arr.size()){
            return mid;
        }
        if(arr[mid-1]> arr[mid]){
            return mid-1;
        }
        else{
            s = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return  -1;

}

void search(int nums[], int target){
    int pivotindex = findpivot(nums);
    if(target  >= nums[0] &&  target <= nums[pivotindex]){
        int ans = binarysearch(nums,target,0,pivotindex);
        return;
    }
    if( pivotindex + 1 < nums.size() && target >= nums[pivotindex] && target <= nums[nums.size() -1]){
        int ans = binarysearch(nums,target,pivotindex + 1,nums.size() -1);
    }
    return ans;
}

int main()
{
    int arr[] = {4,5,6,7,0,1,2,3};
    int n = 4;
    int k = 6;
    search(arr,k);


    return 0;
}
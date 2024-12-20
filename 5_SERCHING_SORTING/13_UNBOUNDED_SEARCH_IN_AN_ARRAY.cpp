#include<iostream>
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
int unbounded(int a[]{
    while(1){
        if(a[i] > x){
            break;
        }
        if(a[i] == x){
            ans = i;
            i++;
        }
    }
    binarysearch(arr,)
})

int main()
{
    int arr[] = {1,2,3,4,5,7,8,9,10,13,15,16,17,18,19,20};
    int target = 19;
    int s = 0;
    int e = (sizeof(arr)/sizeof(int)) -1;

   cout<< binarysearch(arr, target,s,e);





    return 0;
}
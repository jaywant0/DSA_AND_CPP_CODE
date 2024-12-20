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

int exponetial_search(int a[], int n, int x){
    if(a[0] ==x){
        return 0;
    }
    int i = 1;
    while(i<n && a[i] <= x){
        i = i*2;
    }
    return binarysearch(a, x, i/2, min(i,n-1));
}
  

int main()
{
    // this exponetial search is better than binary search
    // we can search in infinite array using exponetial search 
    // this is very imp to us
    int arr[] = {1,2,3,4,5,7,8,9,10,13,15,16,17,18,19,20};
    int target = 19;
    int s = 0;
    int e = (sizeof(arr)/sizeof(int)) -1;

   cout<< binarysearch(arr, target,s,e);
   cout<<endl;
   cout<<exponetial_search(arr,e,target);





    return 0;
}
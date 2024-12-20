#include <iostream>
using namespace std;

int missing_element(int arr[],int s, int e){
    // int s = 0;
    // int e = (sizeof(arr)/4)-1;
    int mid = (s + e)/2;
    int ans =-1;
    while(s <= e){
         int element  = arr[mid];
    if(arr[mid+1] != arr[mid]+1){
        ans = arr[mid] +1;
    }
    else{
      
    }
    return ans;
  
    }
}
int main()
{
    // find smallestmissing elemnt in an araay
    int arr[] = {1,2,3,4,5,6,7,9,10};
    int s =0;
    int e = sizeof(arr)/sizeof(int);
    int n = e-1;
    cout<<missing_element(arr,s,e);

    // for(int i = 0;i<n;i++){
    //     if(arr[i+1] != arr[i]+1){
    //         cout<<(i+1);
    //     }
    // }



    return 0;
}
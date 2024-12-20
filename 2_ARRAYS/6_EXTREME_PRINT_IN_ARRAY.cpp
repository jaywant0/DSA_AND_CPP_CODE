#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    // i/p = 1,2,3,4,5,6,7,8,9,10;
    // o/p = 1,
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int start = 0;
    int end  = n-1;

    while(true){

    if(start > end){
        break;
    }
    if(start == end){
        cout<<arr[start]<<" ";
    }
    else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
    }
    start++;
    end--;

    }
    return 0;
}
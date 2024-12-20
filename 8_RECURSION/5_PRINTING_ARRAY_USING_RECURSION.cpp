#include<iostream>
#include <vector>
using namespace std;

void arrayprinting(int arr[], int n, int i){
    if(i >= n){
        return;
    }
    cout<<arr[i]<<" ";
    arrayprinting(arr,n,i+1);
}

int main()
{
    int arr[10] = {1,2,3,4,5,3,5,4,3,1};
    int n = 10;
    int i = 0;

    for(int i = 0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"printing array using recursion "<<endl;
   
   arrayprinting(arr,n,i);

    return 0;
}
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findmissing(int a[],int n){
    // visited method
    for(int i =0; i<n; i++){
        int index = abs(a[i]);
        if(a[index-1] > 0){
            a[index-1] *= -1;
        } 
    } 
    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i =0; i<n; i++){
        if(a[i] > 0){
            cout<<i+1<<" ";
        }
    }
}

int main()
{
    int arr[] = {1,3,4,3,5};
    // sort(arr.begin(),arr.end());
    int n = sizeof(arr)/sizeof(int);
    
    findmissing(arr,n);




    return 0;
}

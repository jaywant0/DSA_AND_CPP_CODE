#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> arr = {12,45,23,51,19,8,1,2,3,5,7,5,85,4,5,4,44,745,4};
    int n =arr.size();

    // selection_sort(arr,n);
     for(int i =0; i<n-1;i++){
        int minindex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
    } 

    for(int i = 0; i<n; i++){
       cout<< arr[i]<<" ";
    }




    return 0;
}
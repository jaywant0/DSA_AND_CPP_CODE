#include<iostream>
#include<vector>
using namespace std;


int main()
{

    vector<int>arr = {10,1,7,6,14,34,2,3,42,4,23,42,34,23,2334,234,2,34,23,42,34,2334,9};
    int n = arr.size();

    for(int i = 1; i<n; i++){
        int val = arr[i];
        int j = i-1;

        for(; j >= 0; j--){
            if(arr[j] >val){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = val; 
    }
    for(int i = 0; i<n; i++){
       cout<< arr[i]<<" ";
    }

    return 0;
}
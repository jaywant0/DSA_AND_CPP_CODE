#include<iostream>
using namespace std;

int main()
{
    int arr[]  = {-5,7,-3,-4,9,10,-1,11};
    int n = 8;
    int pivot = 0; 
    int k = 0;
    int b[8];
    


    for(int i = 0; i<n; i++){
        if(arr[i] > pivot){
            b[k] = arr[i];
            k++;
        }
    }
    for(int i = 0; i<n; i++){
        if(arr[i] < pivot){
            b[k] = arr[i];
            k++;
        }
    }

    for(int i = 0; i<n; i++){
        cout<<b[i]<<" ";
    }



    return 0;
}
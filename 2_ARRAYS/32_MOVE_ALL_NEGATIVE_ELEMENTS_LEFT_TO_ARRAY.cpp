#include <iostream>
using namespace std;

int main()
{
    int arr[10]  ={1,3,-1,-2,34,-1,7,-9,7,-5};
    int n = 9;
    int i = -1;
    int pivot_element = 0;
    for(int j = 0; j<n; j++){
        if(arr[j] < pivot_element){
           i++;
           swap(arr[i],arr[j]);
        }
    }

    for(int k = 0; k<n; k++){
        cout<<arr[k]<<" ";

    }





    return 0;
}
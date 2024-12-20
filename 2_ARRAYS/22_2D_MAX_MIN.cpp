#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    // int arr[3][3] = {{1,2,3},{4,52,6},{7,8,9}};
    // int row = 3;
    // int col = 3;
    // int max = INT_MIN;

    // for(int i = 0; i<row; i++){
    //     for(int j = 0; j<col; j++){
    //         if(arr[i][j] > max){
    //             max = arr[i][j];
    //         }
    //     }
    // }
    // cout<<max<<" ";

     int arr[3][3] = {{12,42,93},{54,52,6},{7,8,59}};
    int row = 3;
    int col = 3;
    int min = INT_MAX;

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] < min){
                min= arr[i][j];
            }
        }
    }
    cout<<min<<" ";
    
    return 0;
}
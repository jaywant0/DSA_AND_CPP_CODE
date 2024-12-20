#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // this is a very small and easy code to understand
    // approach
    // we just transpose a matrix and swap first row and last row 
    // you can check also this video
    // https://youtu.be/yIUryrv2I7I

    vector<vector<int>> matrix { {1,2,3},{4,5,6},{7,8,9}};
    int n = 3;

    // transpose of matrix
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }

    for(int i = 0; i<n/2; i++){
        for(int j = 0; j<n; j++){
            swap(matrix[i][j],matrix[n-1-i][j]);
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
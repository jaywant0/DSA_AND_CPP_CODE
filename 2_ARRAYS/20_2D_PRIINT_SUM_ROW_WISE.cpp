#include <iostream>
using namespace std;

void rowwisesum(int row,int col,int arr[4][4]){
    int sum = 0;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            sum = sum + arr[i][j];
        }
    }
    cout<<sum<<endl;
}

int main()
{
    int arr[4][4] = {{1,2,3,10},{4,5,6,11},{7,8,9,12}};
    rowwisesum(4,4,arr);
    return 0;
}
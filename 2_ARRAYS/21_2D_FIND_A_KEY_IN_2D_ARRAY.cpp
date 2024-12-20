#include <iostream>
using namespace std;

bool findkey(int row, int col,int key, int arr[3][3]){
     for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(key == arr[i][j]){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 15;
   if( findkey(3,3,target,arr)){
    cout<<"the key is found"<<endl;
   }
   else{
    cout<<"the key is not found "<<endl;
   }

    // for(int i = 0; i<3; i++){
    //     for(int j = 0; j<3; j++){
    //         if(target == arr[i][j]){
    //             cout<<3*i+j;
    //         }
    //     }
    // }
    return 0;
}
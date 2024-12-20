#include<iostream>
using namespace std;

int main()
{

    // int arr[10] = {0,0,0,0,0,1,1,1,1,1};
    // int arr[1]  = {0};
     int arr[1] = {1};

    int count_0 = 0;
    int count_1 = 0;
    int none = 0;

    for(int i = 0; i<1; i++){
        if(arr[i] == 0){
            count_0++;
        }
       if(arr[i] == 1){
            count_1++;
        }
    }
    cout<<count_0<<endl;
    cout<<count_1<<endl;




    return 0;
}
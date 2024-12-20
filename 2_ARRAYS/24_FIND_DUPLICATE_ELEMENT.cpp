#include<iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int  findduplicate(vector<int>arr){
    for(int i = 0 ; i<arr.size();i++){
        for(int j = 1; j<arr.size(); j++){
            if(arr[i] == arr[j]){
                int num = arr[i+1];
                 cout<<num<<" ";
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,1,2,3,4,5};
    findduplicate(arr);

    return 0;

}
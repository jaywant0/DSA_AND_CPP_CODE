#include <iostream>
#include<vector>
using namespace std;

bool checksorted(vector<int> &arr, int&n, int i ){
    if(i == n-1){
        return true;
    }
    if(arr[i+1] <= arr[i]){
        return false;
    }
    return checksorted(arr,n,i+1);
}

int main()
{
    vector<int> v{10,20,30,100,40,50,60};
    int n = v.size();
    int i = 0;
    bool issorted = checksorted(v,n,i);
    if(issorted){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }

    return 0;
}
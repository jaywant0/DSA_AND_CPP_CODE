#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{13,9,5,3,8,4,6,4,3,6};
    int n = arr.size()-1;

    for(int i =0; i<n; i++){
        int pair1 = arr[i];
        for(int j = 0; j<n; j++){
            int pair2 = arr[j];
            cout<<"("<<pair1<<","<<pair2<<")"<<endl;
        }
    }
    return 0;
}
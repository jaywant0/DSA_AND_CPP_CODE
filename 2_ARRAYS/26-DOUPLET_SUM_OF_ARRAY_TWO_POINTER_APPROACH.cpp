#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    int target = 12;
    bool found = false;
     int left = 0;
    int right = a.size() - 1;

    while(left < right){
        int current = a[left] + a[right];
        if(current == target){
            found = true;
            cout<<"("<<a[left]<<","<<a[right]<<")"<<endl;
        }
        if(current < target){
            left++;
        }
        else{
            right--;
        }
    }
    
     
     return 0;
}
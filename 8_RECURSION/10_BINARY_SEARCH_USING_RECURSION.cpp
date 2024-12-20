#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> v,int s, int e,int target){
    if(s > e){
        return -1;
    }
    int mid = s +(e-s)/2;
    if(v[mid] == target){
        return mid;
    }
    if(v[mid] < target){
       return  binarysearch(v,mid+1,e,target);
    }
    else{
        return binarysearch(v,s,mid-1,target);
    }
}

int main()
{
    vector<int> v{10,20,30,40,70,90,99};
    int target = 90;
    int s = 0;
    int n = v.size();
    int e = n-1;
    int ans = binarysearch(v,s,e,target);
    cout<<ans<<endl;




    return 0;
}
#include<iostream>
#include <vector>
using namespace std;

void mergeinplace(vector<int>&v, int start, int mid, int end){
    int total_len = end-start + 1;
    int gap = total_len/2 + total_len %2 ;
    while(gap > 0){
        int i = start, j = start+gap;
        while(j <= end){
            if(v[i] > v[j]){
                swap(v[i], v[j]);
            }
            ++i  ,  ++j;
        }
        gap = gap<= 1  ? 0: (gap/2) + (gap %2);
    }
}

void mergesort(vector<int> &v, int start,int end){
    if(start >= end) return ;
    int mid = (start + end) >>1;
    mergesort(v,start,mid);
    mergesort(v,mid+1,end);
    mergeinplace(v,start,mid,end);
}

vector<int> sortarray(vector<int>& nums){
    mergesort(nums, 0, nums.size()-1);
    return nums;
}



int main()

{




    return 0;
}
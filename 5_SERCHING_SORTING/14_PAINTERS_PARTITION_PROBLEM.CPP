#include<iostream>
using namespace std;

 bool ispossiblesolution(int a[],int n,int k, long long mid){
    long long timesum = 0;
    int c = 1;
    for(int i = 0; i<n; i++){
        if(a[i] > mid){
            return false;
        }
        if(a[i] + timesum > mid){
            c++;
            timesum = a[i];

            if(c > k)  return false;
        }

         else{
              timesum += a[i];
            }
        }
        return true;
    
}

long long minTime(int arr[], int n, int k){
     long long start = 0;
     long long end  =  0;
     for(int i  = 0; i<n; i++){
        end += arr[i];
     }
     long long ans  = -1;
     while(start <= end){
        long long mid = start + (end-start)/2;
        if(ispossiblesolution(arr,n,k,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
     }
     return ans;
}
int main()
{
    int arr[] = {10,20,30,40};
    int n = 4; 
    int k = 2;
    long long jay = minTime(arr,n,k);
    cout<<jay<<endl;

    return 0;
}
#include <iostream>
#include<limits.h>
#include <numeric>

#include<vector>
using namespace std;

bool ispossiblesolution(int A[], int N, int M, int mid){
    int pagesum = 0;
    int c = 1;
    for(int i = 0; i<N; i++){
        if(A[i] > mid){
            return false;
        }
        if(pagesum + A[i] > mid){
            c++;
            pagesum =  A[i];
            if(c > M){
                return false;
            }
        }
        else{
            pagesum  +=  A[i];
        }
    }
    return true;
}

int findpages(int A[], int N, int M){
    if(M  >  N){
        return -1;
    }
        int start = 0;
        int end = accumulate(A,A+N,0);

        int ans = -1;
        while(start <= end){
            int mid = (start + end)/2;
            if(ispossiblesolution(A,N,M,mid)){
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
    int arr[] = {12,34,67,90};
    int n = 4;     // n = no of books
    int m = 2;     // m = no of students

    int v = findpages(arr,n,m);
    cout<<v<<endl;




    return 0;
}
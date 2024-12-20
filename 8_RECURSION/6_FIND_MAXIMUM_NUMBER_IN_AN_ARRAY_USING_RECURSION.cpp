#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;

void findmaximum(int arr[], int n,int i, int &maxi){
    if(i >= n)
        return ;
    
    if(arr[i] > maxi){
        maxi = arr[i];
    }
    findmaximum(arr,n,i+1,maxi);

}
int main()
{
    int arr[11] = {1,2,3,4,3,55,6,4,46,54,65};
    int n = 11;
    int i = 0;
    int maxi = INT_MIN;
    findmaximum(arr,n,i,maxi);
    cout<<maxi;
   
    return 0;
}
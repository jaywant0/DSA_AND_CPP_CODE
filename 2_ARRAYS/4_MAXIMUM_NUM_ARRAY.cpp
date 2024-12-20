#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[10] = {1,23,4,35,354,346,345,34,754,4543};
    int n = 10;
    int maxi = INT_MIN;

    for(int i = 0; i<10; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<" the maximum number is "<<maxi<<endl;

    return 0;
}
#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr { 1,2,3,4,5,6,7,8,9,10};
    int n = arr.size();
    int total = 0;
    for(int i = 0; i<10; i++){
        int sum1 = arr[i];
        for(int j = i+1; j<10; j++){
            int sum2 = arr[j];
             total = sum1 + sum2;
            if(total  ==  10){
                cout<<"( "<<sum1<<","<<sum2<<")"<<endl;
            }
        }
    }
    
    return 0;
}
#include<iostream>
#include <vector>
using namespace std;


void counting(int n){
    if(n == 0){
        return;
    }
    // cout<<n<<" ";
    counting(n-1);
    cout<<n<<" ";


}

int main()
{
    int n = 5;
    counting(n);
   

    return 0;
}
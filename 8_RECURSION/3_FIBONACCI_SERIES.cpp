#include<iostream>
#include <vector>
using namespace std;

int fib(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 1;
    }
    int ans = fib(n-1) + fib(n-2);
    return ans;
}


int main()
{
    int n = 7;
    int ans = fib(n);
    cout<<n<<"th term is : "<<ans<<endl;

   

    return 0;
}
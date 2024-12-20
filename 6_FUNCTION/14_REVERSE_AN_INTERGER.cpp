#include <iostream>
#include<limits.h>
#include <algorithm>
using namespace std;

int reverse(int x){
    int ans = 0; 
    int rem = 0;

    bool isneg = false;

    if(x <= INT_MIN){
        return 0;
    }
    if(x < 0){
        x = -x;
    }
    while(x > 0 ){
        if(ans > INT_MAX / 10){
            return 0;
        }
        int digit = x % 10;
        ans = ans * 10 + digit;
        x = x/10;
    }
    return isneg ? -ans : ans;
    cout<<ans<<endl;
}

int main()
{
    cout<<"The answer is "<<endl;
    int a = -1234;
    cout<<reverse(a);


    return 0;
}
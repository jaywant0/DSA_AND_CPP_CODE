#include<iostream>
#include <vector>
using namespace std;


int stairs(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    int ans = stairs(n-1) + stairs(n-2);

    return ans;
}


int main()
{
    int n = 10;
    cout<<stairs(n);
   

    return 0;
}
#include <iostream>
using namespace std;

int numrollsttarget(int n,int k,int target)
{
    // base case
    if(target < 0) return 0;
    if(n == 0 && target == 0) return 1;
    if(n== 0 && target != 0) return 0;
    if(n != 0 && target == 0) return 0;

    int ans = 0;
    for(int i = 1; i<=k; i++){
        ans = ans + numrollsttarget(n-1,k, target -i);
    }
    return ans;

}

int main()
{
    int n = 3;
    int k  = 2;
    int target = 6;

    int m = numrollsttarget(n,k,target);
    cout<<m;




    return 0;
}
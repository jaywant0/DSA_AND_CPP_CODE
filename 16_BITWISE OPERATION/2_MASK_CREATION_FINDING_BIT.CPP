#include<iostream>
using namespace std;

int getithbit(int n, int i){
    int mask = 1 << i;
    int ans = n & mask;
    if(ans == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
 {
    int n;
    cin>>n;
    int i;
    cin>>i;
   cout<<getithbit(n,i);






    return 0;
}
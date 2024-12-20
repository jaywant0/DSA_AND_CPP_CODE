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

void setbit(int n , int i){
    int mask = 1 << i;
    int ans = n | mask;
    cout<<"set bit = "<<ans<<endl;

}


void clearbit(int n , int i){
    int mask  =  ~(1 <<  i);
    int ans = n & mask;

    cout<<"clear bit "<<ans<<endl;
}

void updateithbit(int &n, int i , int target){
    clearbit(n,i);
    int mask  = target << i;
    n = n | mask;
    cout<<"after updating "<<n<<endl;
}


int main()
 {
    int n = 11;
    updateithbit(n,1,0);
    



    return 0;
}
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


void clearlastbit(int n , int i){
    int mask  =  (-1 <<  i);
    n= n & mask;

    cout<<"clear bit "<<  n <<endl;
    
    
}
    
    



int main()
 {
    int n = 7;
    clearlastbit(n,2);






    return 0;
}
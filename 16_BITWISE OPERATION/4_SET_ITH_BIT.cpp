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


int main()
 {

    
   cout<<"get ith bit "<<endl;
   cout<<getithbit(10,3);
   
   cout<<endl;
   setbit(10,2);






    return 0;
}
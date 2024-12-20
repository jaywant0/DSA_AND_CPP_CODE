#include<iostream>
using namespace std;



void clearlastbit(int n , int i){
    int mask  =  (-1 <<  i);
    n= n & mask;

    cout<<"clear bit "<<  n <<endl;
    
    
}

int countsetbits(int n){
    int count = 0;
    while(n != 0){
        int lastbit = n & 1;
        if(lastbit)
            count++;
            
         // right shift
            n = n >> 1;
   }
    return count;
}

int countsetbitfast(int n){
    int count = 0;
    while(n != 0){
        // remove last set bit
        n = (n & (n-1));
        count++;
    }
}
    
    
inutmain()
{
    cout<<"number of set of bit "<<countsetbits(1024)<<endl;
    cout<<"number of set of bit "<<countsetbitfast(1024)<<endl;

    return 0;
}
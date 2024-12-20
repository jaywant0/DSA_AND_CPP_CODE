#include<iostream>
using namespace std;



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
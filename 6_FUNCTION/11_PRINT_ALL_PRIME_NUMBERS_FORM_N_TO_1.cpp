#include <iostream>
using namespace std;


bool primeornot(int a){
    int i = 2;
    for(i = 2; i<a-1; i++){
        if(  a % i == 0){
            return false;
        }
        else{
            return true;
        }
    }
}


int main()
{
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;
    for(int i = 1; i <= a; i++){
        bool isprime = primeornot(i);
        if(isprime){
            cout<<i<<" ";
        }
    }


    return 0;
}
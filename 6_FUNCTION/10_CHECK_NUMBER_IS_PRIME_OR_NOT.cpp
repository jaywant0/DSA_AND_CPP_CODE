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
    cout<<"Enter the number "<<endl;
    cin>>a;

    bool isprime = primeornot(a);

    if(isprime){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime "<<endl;
    }


    return 0;
}
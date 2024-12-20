#include <iostream>
using namespace std;

bool evenornot(int a){
    if(a % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n ;
    cout<<"enter the number "<<endl;
    cin>>n;

    cout<<evenornot(n);



    return 0;
}
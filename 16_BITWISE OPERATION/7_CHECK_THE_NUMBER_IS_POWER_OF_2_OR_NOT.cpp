#include<iostream>
using namespace std;

bool poweroftwoornot(int n){
    int mask = n & (n-1);  // This is one of the most inmprtant to check number power is or not
    if(mask == 0){
        return true;
    }
    return false;
}

int main()
{
    cout<<poweroftwoornot(15);
    cout<<endl;
    cout<<poweroftwoornot(16);
    cout<<endl;
    cout<<poweroftwoornot(99);





    return 0;
}
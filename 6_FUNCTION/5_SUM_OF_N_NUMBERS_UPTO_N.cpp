#include <iostream>
using namespace std;

void count(int a){
    int c = 0;
    for(int i = 0; i<=a ; i++){
        c = c + i;
    }
    cout<<c<<endl;
}


int main()
{
    int a;
    cout<<"Enter the number "<<endl;
    cin>>a;
    count(a);



    return 0;
}
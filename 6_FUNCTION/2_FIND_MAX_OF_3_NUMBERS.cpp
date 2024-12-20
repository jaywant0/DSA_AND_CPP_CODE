#include<iostream>
using namespace std;

void max1(int a, int b, int c){
    if(a > b && a > c){
        cout<<a<<endl;
    }
    if(b > a &&  b > c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
}

int main()
{
    int a = 180;
    int b = 920;
    int c = 10;

    max1(a,b,c);


    return 0;
}
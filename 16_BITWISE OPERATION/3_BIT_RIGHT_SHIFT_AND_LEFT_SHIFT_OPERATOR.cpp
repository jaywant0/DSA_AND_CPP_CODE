#include<iostream>
using namespace std;

int main()
{

    int b = 10 >> 2;
    int c = 10 >> 3;
    int d = 20 >> 5;
    int e = 50 >> 6;



    cout<<"Right shift of numbers "<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;

    int f = 10 << 2;
    int i = 10 << 3;
    int g = 20 << 5;
    int h = 50 << 6;

    cout<<"Left shift of numbers "<<endl;

    cout<<f<<endl;
    cout<<i<<endl;
    cout<<g<<endl;
    cout<<h<<endl;




    return 0;
}
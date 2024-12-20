#include <iostream>
using namespace std;

void area(int r){
    float b = 3.14 *r*r;
    cout<<b<<endl;
}





int main()
{
    int r;
    cout<<"enter radius of circle"<<endl;
    cin>>r;

    area(r);



    return 0;
}
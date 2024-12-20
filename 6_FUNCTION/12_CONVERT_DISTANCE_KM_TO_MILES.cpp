#include <iostream>
using namespace std;

void convertkmtomiles(int a){
    float conversion = a * 0.621371;
    cout<<conversion<<endl;
}



int main()
{
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;

    convertkmtomiles(a);


    return 0;
}
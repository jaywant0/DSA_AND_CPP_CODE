#include <iostream>
using namespace std;

void convertcelciustofah(int a){
    float conversion = ((a * 9/5) + 32 );
    cout<<conversion<<endl;
}



int main()
{
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;

    convertcelciustofah(a);


    return 0;
}
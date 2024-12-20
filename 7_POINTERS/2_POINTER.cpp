#include <iostream>
using namespace std;



int main()
{
    int a =  7;
    int b = 17;
    int *c = 7;
    *c = 7;
    cout<<a<<" "<<b<<endl;

    // this will give you error because *c can't intilaize the number it only store the varible address

    
    return 0;
}
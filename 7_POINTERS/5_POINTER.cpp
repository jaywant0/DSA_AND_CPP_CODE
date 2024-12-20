#include <iostream>
using namespace std;



int main()
{
    char ch = 'e';
    char *ptr = &ch;
    ch++;

    cout<<*ptr<<endl;

    //  int ch = 10;
    //  int *ptr = &ch;
    // // ch++;

    // cout<<ptr<<endl;
   
    
    return 0;
}
#include <iostream>
using namespace std;



int main()
{
    char arr[20];
    int i ;
    *(arr + i) = '\0';
    for(int i= 0;i<10; i++){
        *(arr + i ) = 65 + i;
    }
    
    cout<<arr;

   
  
  
    return 0;
}
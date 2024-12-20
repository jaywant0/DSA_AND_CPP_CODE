#include <iostream>
using namespace std;

void evensum(int n){
    int sum = 0;
    for(int i = 0; i<= n; i++){
        if( i % 2 == 0){
            sum = sum + i;
        }
    }
    cout<<sum<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    evensum(n);


    return 0;
}
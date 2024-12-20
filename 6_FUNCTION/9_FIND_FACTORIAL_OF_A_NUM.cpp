#include <iostream>
using namespace std;

void factorial(int a){
    int ans = 1;
    for(int i = 1; i<= a; i++){
        ans = ans * i;

    }
    cout<<ans<<endl;
}
int main()
{
    int a;
    cout<<"enter the num "<<endl;
    cin>>a;

    factorial(a);


    return 0;
}
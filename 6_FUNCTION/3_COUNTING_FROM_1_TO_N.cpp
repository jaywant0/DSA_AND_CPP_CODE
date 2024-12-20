#include <iostream>
using namespace std;

void count(int a){
    int c = 0;
    for(int i = 1; i<=a; i++){
        cout<<i<<endl;
    }
    
}



int main(){

    int a;
    cout<<"enter a number "<<endl;
    cin>>a;
    count(a);







    return 0;
}
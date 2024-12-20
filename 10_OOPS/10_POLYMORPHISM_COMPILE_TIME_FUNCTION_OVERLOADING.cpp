#include <iostream>
using namespace std;

// COMPILE TIME POLYMORPHISM
// STATIC POLYMORPHIMS
// FUNCTION OVERLOADING
class maths{
    public:
    int sum(int a, int b){
        cout<<"I am first "<<endl;
        return a+b;
    }
    int sum(int a,int b, int c){
        cout<<"I am second "<<endl;
        return a+b+c;
    }
     float sum(float a){
        cout<<"I am third"<<endl;
        return a;
    }
};

int main()
{
    maths obj;
    cout<<obj.sum(2,5)<<endl;
    cout<<obj.sum(2,5,2)<<endl;
    cout<<obj.sum(1.4);
   



    return 0;
}
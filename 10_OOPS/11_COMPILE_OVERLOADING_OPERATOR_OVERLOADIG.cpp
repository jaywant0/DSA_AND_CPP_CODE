#include <iostream>
using namespace std;


// compiler overloading 
// static polymorphism
// operator overloading

class param{
    public:
    int val;
    void operator+(param &obj){
        int value1 = this->val;
        int value2 = obj.val;
        cout<<(value1 - value2)<<endl;
    }
};

class viru{
    public:
    int val;
    void operator *(viru &obj){
        int val1 = this->val;
        int val2 = obj.val;
        cout<<(val1/val2)<<endl;
    }
};

class jay{
    public:
    int val;
    void operator /(jay &obj){
        int num = this->val;
        int num2 = obj.val;
        cout<<(num * num2)<<endl;
    }
};



int main()
{
    jay num1,num2;
    num1.val = 20;
    num2.val = 10;
    num1/num2;



    param obj3, obj4;
    obj3.val = 20;
    obj4.val = 10;
    obj3 + obj4;

    param obj1,obj2;
    obj1.val = 5;
    obj2.val = 2;
    obj1 + obj2;

    viru a,b;
    a.val = 10;
    b.val = 2;
    a*b;

    
   
    return 0;
}
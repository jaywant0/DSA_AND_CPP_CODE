#include <iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;
    string name;

    // constructor
    // default constructor
    animal(){
        // this->age = 0;
        // this->name = "vodafone";
        cout<<"constuctor called "<<endl;
    }

    animal(int age){
        this->age =  age;
        cout<<"this is paremeterized constructor"<<endl; 
    }
    ~animal(){
        cout<<"i am insider destrjctor"<<endl;
    }
};
int main()
{
    animal dog(10);
    animal* dog1 = new animal(100);

    // dog.age = 50;
    // cout<<dog.age<<endl;
    dog.name = "airtel";
    cout<<dog.name<<endl;



    return 0;
}
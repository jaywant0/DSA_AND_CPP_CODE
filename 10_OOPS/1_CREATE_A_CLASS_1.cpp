#include<iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;
    string name;
};

class circle{
    public:
    int radius;
    
    void area(){
       cout<<(radius * radius) * 3.14<<endl;
    }
    void cicumfernce(){
      cout<<2*(3.14*radius)<<endl;
    } 
};
int main()
{
    // static allocation
    // animal dog;
    // dog.age = 10;
    // dog.weight = 20;
    // dog.name = "dogy vodafone";
    // cout<<dog.age<<endl;
    // cout<<dog.weight<<endl;
    // cout<<dog.name<<endl;

    // dynamic allocation
    animal* cat = new animal;
    (*cat).age = 15;
    // cat->age = 20;
    cout<<cat.age<<endl;


    // circle c1;
    // c1.radius = 3;
    // c1.area();
    // c1.cicumfernce();


    return 0;
}
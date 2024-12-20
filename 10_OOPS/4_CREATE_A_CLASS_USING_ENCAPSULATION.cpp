#include <iostream>
using namespace std;

class person{
    private:
    int age;
    int weight;
    public:
    string name;
    int height;

    void setage(int age){
        this->age = age;
    }
    void setweight(int weight ){
        this->weight = weight;
    }

    int getage(){
        return age;
    }
    int getweight(){
        return weight;
    }
};


int main()
{
    person jay;
    person* om = new person;
    (*om).setweight(70);
    jay.setage(20);
    jay.setweight(50);
    jay.name = "jaywant";
    cout<<jay.getage()<<endl;
    cout<<jay.getweight()<<endl;
    cout<<jay.name<<endl;
    cout<<om->getweight();


    return 0;
}
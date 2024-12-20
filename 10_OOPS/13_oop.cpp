#include<iostream>
#include<string>
using namespace std;

class vehicle{
    public: 
    string n8ame;
    string model;
    int noOfT   yres;

    vehicle(string name , string model , int noOfTyres){
        cout<<"I am inside vehicle ctor"<<endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }

    public:
    void startEngine(){
        cout<<"Engine is starting "<<name<<" "<<model<<endl;
    }

    void stopEngine(){
        cout<<"Engine is stop "<<name<<" "<<model<<endl;
    }

};

class car : public vehicle{
    public:
    
    int noOfDoors;
    string transmissionType;

     car(string name , string model , int noOfTyres, int noOfDoors,string transmissionType):vehicle(name , model, noOfTyres){
       cout<<"I am inside car ctor"<<endl;
       this->noOfDoors = noOfDoors;
       this->noOfTyres = noOfTyres;
    }

    void startEngine(){
        cout<<"AC is starting"<<endl;
    }

};

int main()
{
    vehicle a("Range rover","Top",14);
    // a.name = "Range Rover";
    cout<<"hi"<<endl;
    car b("verna","top",4,4,"fast");

    cout<<b.model<<endl;
    cout<<a.name<<endl;


    





    return 0;
}
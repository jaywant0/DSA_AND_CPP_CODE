#include <iostream>
using namespace std;

class car{
    public:
    int age;
    int weight;
    string name;

    void speedup(){
        cout<<"speeding "<<endl;
    }    
};

class scorpio : public car{

};

class fortuner : public car{

};

int main()
{
    scorpio s11;
    s11.speedup();
    
    cout<<endl;

    fortuner mini;
    mini.speedup();




    return 0;
}
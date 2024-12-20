#include <iostream>
using namespace std;

class car{
    public:
    string name;
    int weight;
    int age;

    void speedup(){
        cout<<"speeding up"<<endl;
    }
    void breakmaro(){
        cout<<"break"<<endl;
    }
};
class scorpio : public car{

};

int main()
{
    scorpio jay;
    jay.speedup();
    



    return 0;
}
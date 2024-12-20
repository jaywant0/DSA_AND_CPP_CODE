#include <iostream>
using namespace std;

class a{
    public:
    int physics;
};
class b{
    public:
    int chemistry;
};

class c: public a,  public b{
    public:
    int maths;
};



int main()
{
    c subject;
    subject.physics = 100;
    subject.chemistry = 200;
    subject.maths = 300;
    cout<<subject.physics<<endl;
    cout<<subject.chemistry<<endl;
    cout<<subject.maths<<endl;
   



    return 0;
}
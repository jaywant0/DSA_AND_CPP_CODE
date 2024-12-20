#include <iostream>
using namespace std;

class fruit{
    public:
    string name;
    string color;
};

class mango : public fruit{
    public:
    int weight;
};

class apple : public mango{
    public:
    int sugarlevel;
};

int main()
{
   fruit m;
   m.name = "orange";
   m.color = "orange_color";
   cout<<m.name<<endl<<m.color<<endl;

   cout<<endl;

   mango k ;
   k.name = "kevi";
   k.color = "green";
   k.weight = 100;
   cout<<k.name<<endl<<k.color<<endl<<k.weight<<endl;

   cout<<endl;
   apple v ;
   v.name = "kashmiri_apple";
   v.color = "red";
   v.weight = 120;
   v.sugarlevel = 132;
   cout<<v.name<<endl<<v.color<<endl<<v.weight<<endl<<v.sugarlevel<<endl;


    return 0;
}
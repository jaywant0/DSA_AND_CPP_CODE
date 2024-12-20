#include <iostream>
using namespace std;


class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog : public animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

class shape //final after using final keyword you can't inheritata shape class
{
    public:
  virtual void draw(){
        cout<<"generic drawing"<<endl;
    }
};

class circle : public shape{
    public:
    void draw(){
        cout<<"circle drawing"<<endl;
    }
};

class rectangle : public shape{
    public:
    void draw(){
        cout<<"rectangle drawing "<<endl;
    }
};
 
void shapedrawing(shape *s){
    s->draw();  // runtime polymorphism 

}


int main()
{

    // final keyword'
    circle c;
    rectangle r;

    shapedrawing(&c);
    shapedrawing(&r);





    // circle a;
    // a.draw();

    // rectangle b;
    // b.draw();

//     animal a;
//     a.speak();
    
//    dog b;
//    b.speak();

    return 0;
}
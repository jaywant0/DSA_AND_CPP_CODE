#include <iostream>
using namespace std;

class school{
    private:
    int student;
    public:
    int teacher;
    int classroom;
};

int main()
{
    school jjmcoe;
    jjmcoe.teacher = 100;
    jjmcoe.classroom = 80;
  // jjmcoe.student = 400;

    cout<<jjmcoe.teacher<<endl;
    cout<<jjmcoe.classroom<<endl;
      
    return 0;
}
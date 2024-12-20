#include <iostream>
using namespace std;

char getgrade(int marks){
    if(marks >= 90){
        return 'A';
    }
    if(marks >= 80){
        return 'B';
    }
    if(marks >= 70){
        return 'C';
    }
    if(marks >= 60){
        return 'D';
    }
    else{
        return 0;
    }
}

int main()
{
    int a = 90;
   cout<< getgrade(a)<<endl;
   int b = 80;
   cout<<getgrade(b)<<endl;


    return 0;
}
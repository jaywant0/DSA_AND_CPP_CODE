#include <iostream>
#include <stack>
using namespace std;

void printmiddle(stack<int> &s, int &totalsize){
    // base case
    if(s.size() == (totalsize/2)){
        cout<<"middle element is : "<<s.top()<<endl;
        return;
    }
    int temp = s.top();
    s.pop();

    //recursive call 
    printmiddle(s,totalsize);
}


int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(40);
    s.push(5);
    s.push(6);

    int total_size = s.size();
    printmiddle(s,total_size);




    return 0;
}


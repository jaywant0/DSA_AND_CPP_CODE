#include <iostream>
#include <stack>
using namespace std;

void printbottom(stack<int> &s, int &target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int topelement = s.top();
    s.pop();

    // recursive call
    printbottom(s,target);
    s.push(topelement);
}
void reverestack(stack<int>&s){
    //base case
    if(s.empty()){
        return;
    }
    int target = s.top();
    s.pop();
    // reverse stack
    reverestack(s);
    // insert at bottom
    printbottom(s,target);
}

int main()
{
    stack<int> a;
    a.push(10);
    a.push(20);
    int totalsize = a.size();

    reverestack(a);
    cout<<"printing "<<endl;
    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }
    cout<<endl;





    return 0;
}
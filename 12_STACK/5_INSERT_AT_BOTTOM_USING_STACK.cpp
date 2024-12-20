#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>&s, int target){
    // base case
    if(s.empty()){
       s.push(target);
       return; 
    }
    int topelement = s.top();
    s.pop();
    // recursive call
    solve(s,target);
     s.push(topelement);
}

void printbottom(stack<int>&s, int &totalsize){
    if(s.empty()){
        cout<<"stack is empty, can't insert at bottom "<<endl;
        return;
    }
    int target = s.top();
    s.pop();
    solve(s,target);
}

int main()
{
    stack<int> jay;
    jay.push(10);
    jay.push(20);
    jay.push(30);
    jay.push(40);
    // int target = 50;

    int totalsize = jay.size();

    printbottom(jay,totalsize);
    cout<<"printing "<<endl;
    while(!jay.empty()){
        cout<<jay.top()<<" ";
        jay.pop();
    }
    cout<<endl;




    return 0;
}
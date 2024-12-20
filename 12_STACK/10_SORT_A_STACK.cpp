#include<iostream>
#include<stack>
using namespace std;


void insertsorted(stack<int> &s, int target){
    // base case
    if(s.empty()){
        s.push(target);
        return ;
    }
    if(s.top() >= target){
        s.push(target);
        return;
    }
    int topelement = s.top();
    s.pop();
    insertsorted(s,target);

    // bt
    s.push(topelement);
}

void sortstack(stack<int>&s){
    // base case
    if(s.empty()){
        return;
    }
    int topelement = s.top();
    s.pop();

    sortstack(s);
    insertsorted(s,topelement);
}


int main()
{
    stack<int>s ;
    s.push(7);
    s.push(3);
    s.push(6);
    s.push(2);

    stack<int>v ;
    v.push(7);
    v.push(3);
    v.push(6);
    v.push(2);

    cout<<"printing without sorting "<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    sortstack(v);

    cout<<"printing "<<endl;
    while(!v.empty()){
        cout<<v.top()<<" ";
        v.pop();
    }
    cout<<endl;



    return 0;
}
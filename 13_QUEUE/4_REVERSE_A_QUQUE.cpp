#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reversequeue(queue<int> &q){
    stack<int> s;
    // step 1
    while(!q.empty()){
        int element =q.front();
        q.pop();
        s.push(element);
    }
    // step 2
    while(!s.empty()){
        int element = s.top();
        s.pop();

        q.push(element);
    }
}

void reverseusingrecursion(queue<int> &q){
    // base case
    if(q.empty()){
        return ;
    }
    // step 2;
    int temp = q.front();
    q.pop();

    // step 3
    reverseusingrecursion(q);

    // step 4;
    q.push(temp);
}


int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);

    reversequeue(q);
    // cout<<"printing queue "<<endl;
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    cout<<endl;
    cout<<"printing queue using recursion "<<endl;
    reverseusingrecursion(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }





    return 0;
}
#include<iostream>
#include<queue>
using namespace std;


int main()
{
    // creation of queue 
    // it is base on FIFO ORDER  FIRST IN FIRST OUT3

    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // size
    cout<<"size o queue is "<<q.size()<<endl;

    // removal
    q.pop();

    cout<<"size of queue is "<<q.size()<<endl;

    // empty or not
    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"queue is not empty "<<endl;
    }

    cout<<"fornt element is in queue "<<q.front()<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;




    return 0;

}
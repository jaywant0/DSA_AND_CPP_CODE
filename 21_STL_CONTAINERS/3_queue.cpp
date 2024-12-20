#include<iostream>
#include<queue>
using namespace std;



int main()
{
    queue<int> a;
    queue<int> b;

    a.push(10);
    a.push(20);

    b.push(100);
    b.push(200);

    a.swap(b);

    cout<<a.front()<<" "<<a.back()<<endl;






    // first in first out
    //creation'

    queue<int> q;

    //insertion
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);

    // cout<<"size of queue is "<<q.size()<<endl;
    // // there is no clear method in queue]]

    // q.pop();  // always pop first element
    // cout<<"size of queue is "<<q.size()<<endl;

    // if(q.empty() == true){
    //     cout<<"q is not empty "<<endl;
    // }
    // else{
    //     cout<<"Q is not empty "<<endl;
    // }

    // cout<<"Q -> front " <<q.front()<<endl;
    // cout<<"q -> back  "<<q.back()<<endl;



    return 0;
}
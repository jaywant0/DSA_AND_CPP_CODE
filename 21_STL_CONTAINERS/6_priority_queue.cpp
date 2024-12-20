#include<iostream>
#include<queue>
using namespace std; 



int main()
{

    // priority_queue<int> pq;
    // // max heap -> max val -> highest value
    // pq.push(10);
    // pq.push(25);
    // pq.push(55);
    // pq.push(21);

    // // top -> elememt is = highest priority

    // cout<<pq.top()<<" "<<endl;

    // pq.pop(); // highest priority element pop or delete

    // cout<<pq.top()<<endl;

    // // size
    // cout<<pq.size()<<endl;

    // if(pq.empty() == true){
    //     cout<<"priority queue is empty "<<endl;
    // }
    // else{
    //     cout<<"priority queue is not empty "<<endl;
    // }



    // min heap creation
    priority_queue<int , vector<int>, greater<int> > pq;
    pq.push(100);
    pq.push(50);
    pq.push(25);

    // in priority quque min heap top is minimum value
    cout<<"min heap "<<pq.top()<<endl;

    pq.pop();
    cout<<"min heap "<<pq.top()<<endl;







    return 0;
}
#include<iostream>
#include<queue>

using namespace std;

int main()

{
    //in deque we can push or pop both side like front and rear

    deque<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);

    a.push_front(50);
    a.push_back(60);

    cout<<"front element is "<<a.front()<<endl;
    cout<<"last element is "<<a.back()<<endl;

    cout<<"size of deque is "<<a.size()<<endl;

    a.pop_front();
    a.pop_back();

    cout<<"size of deque is "<<a.size()<<endl;

    cout<<"front element is "<<a.front()<<endl;
    cout<<"last element is "<<a.back()<<endl;



    if(a.empty() == true){
        cout<<"MY doubly queue is "<<endl;
    }
    else{
        cout<<"my double queue is not empty "<<endl;
    }

   deque<int>::iterator it = a.begin();

   while(it != a.end()){
    cout<<*it<<" ";
    it++;
   }cout<<endl;

   cout<<a[2]<<" "<<endl;
   cout<<a.at(2)<<" "<<endl;

   a.insert(a.begin(),101);
   cout<<a.at(0)<<endl;

   a.clear();
   cout<<"size of deque is "<<a.size()<<endl;



   // priority queue 
   



    return 0;
}
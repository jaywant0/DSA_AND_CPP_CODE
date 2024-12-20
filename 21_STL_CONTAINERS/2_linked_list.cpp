#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> mylist;
    
    //insertation
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);
    mylist.push_back(50);

    // 10 -> 20 ->30 ->40 ->50

    mylist.push_front(100);
    // 100 -> 10 -> 20 -> 30 -> 40 ->50
    
    // deletion 
    mylist.pop_back();
    // 100 -> 10 -> 20 -> 30 -> 40
    mylist.pop_front();
    // 10 -> 20 -> 30 -> 40 ->50

    cout<<mylist.size()<<endl;
    // 4
    // mylist.clear();
    // cout<<"size of linked list is "<<mylist.size()<<endl;

    // //empty or not
    // if(mylist.empty()){
    //     cout<<"linked list is empty"<<endl;
    // }
    // else{
    //     cout<<"linked list is not empty"<<endl;
    // }

    // cout<<"front element linked list "<<mylist.front()<<endl;


    // iteratore

    // list<int>:: iterator it = mylist.begin();

    // while(it != mylist.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

    // mylist.remove(10);
    // cout<<endl;

    // list<int>:: iterator it2 = mylist.begin();

    // while(it2 != mylist.end()){
    //     cout<<*it2<<" ";
    //     it2++;
    // }

    // swap if two linked list

    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    first.insert(first.begin(),111);

    list<int>::iterator it3 = first.begin();

    while(it3 != first.end()){
        cout<<*it3<<" ";
        it3++; 
    }cout<<endl;

     list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    cout<<"size of second is "<<second.size();
    second.erase(second.begin(), second.end());
    cout<<"size of second is "<<second.size();

    first.swap(second);

    list<int>::iterator it4 = first.begin();

    while(it4 != first.end()){
        cout<<*it4<<" ";
        it4++; 
    }



    return  0;
}
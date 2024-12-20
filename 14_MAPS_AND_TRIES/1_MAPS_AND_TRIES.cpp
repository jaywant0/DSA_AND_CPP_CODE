#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{

    // create 
    unordered_map<string, int > number_system;

    // insert
    pair<string,int> p = make_pair("One",1);
    number_system.insert(p);

    pair<string, int>p1  = make_pair("Two", 2);
    number_system.insert(p1);

    pair<string, int>p2 = make_pair("Three", 3);
    number_system.insert(p2);

    // method 2
    pair<string ,int> p4("Four", 4);
    number_system.insert(p4);

    pair<string, int> p5("Five", 5);
    number_system.insert(p5);

    // method 3    best and easy to inseration of element 
    
    number_system["Six"]   = 6;
    number_system["Seven"] = 7;
    number_system["Eight"] = 8;
    number_system["Nine"]  = 9;
    number_system["Ten"]   = 10;
    number_system["Twenty"]  = 20;
    // access 

    cout<<number_system.at("One")<<endl;

    cout<<number_system.at("Two")<<endl;
    cout<<number_system.at("Three")<<endl;
    cout<<number_system.at("Four")<<endl;
    cout<<number_system.at("Five")<<endl;
    cout<<number_system.at("Six")<<endl;
    cout<<number_system.at("Seven")<<endl;
    cout<<number_system.at("Eight")<<endl;
    cout<<number_system.at("Nine")<<endl;
    cout<<number_system.at("Ten")<<endl;

    //searching

    cout<<"Searching The Element "<<endl;

    cout<<number_system.count("Ten")<<endl;
    cout<<number_system.count("two")<<endl;

    if(number_system.find("Ten") != number_system.end()){
      cout<<"ten is found "<<endl;
    }
    else{
      cout<<"ten is not found"<<endl;
    }

    // size 
    cout<<"size of map is " <<number_system.size()<<endl;

    cout<<"printing all values in map "<<endl;

    for(auto i: number_system){
      cout<<i.first<<" ->>>>  "<<i.second<<endl;
    }

  


    return 0;
}

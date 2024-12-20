#include<bits/stdc++.h>
// #include <map>
using namespace std;

int main()
{
    // declare a map 
    map<int,string>m;

    // intialization of map 
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";

    // insertation of map
    m.insert({4,"afg"});
    // this statement is used for traverse the map or use foe printing the key value pair in map
    map<int,string >:: iterator it;


    // this is the teachnique of printing the map
    for(it = m.begin();it !=m.end(); ++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    //map key value is access by .first
    // map pair v 



    return 0;
}
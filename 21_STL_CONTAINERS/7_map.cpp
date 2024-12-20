#include<iostream>
#include<map>
#include<utility>
#include<unordered_map>

using namespace std;

int main()
{
    //creation
    unordered_map<string, string>table;
    // map<string , string>table;  // this is ordered map it f=print value alphabetically

    //insertion
    table["in"] = "india";
    table.insert(make_pair("en","england")); 

    pair<string,string>p;

    p.first = "br";
    p.second = "Brazil";
    table.insert(p);
    cout<<"size of table "<<table.size()<<endl;

    cout<<table.at("in")<<endl;

    // erase function
    table.erase(table.begin(), table.end());

    cout<<"size of table "<<table.size()<<endl;

    // modification
    // table.at("in")  = "jay";

    // cout<<table.at("in")<<endl;
    // table["in"] = "jaywant";
    // cout<<table["in"]<<endl;


    // unordered_map<string,string>:: iterator it = table.begin();
    // in unoredered map random values comes first

    // while(it != table.end()){
    //     pair<string, string> p = *it;
    //     cout<<p.first<<" "<<p.second<<endl;
    //     it++;
    // }

    // table.clear();
    // cout<<"size of table "<<table.size()<<endl;

    // if(table.empty() == true){
    //     cout<<"table is empty "<<endl;
    // }
    // else{
    //     cout<<"table is not empty"<<endl;
    // }



    // find fucntion

    if(table.find("in") != table.end()){
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }

    // count function
    if(table.count("in") == 0){
        cout<<"the key is not found"<<endl;
    }
    else{
        cout<<"The key is found";
    }

    return 0;
}
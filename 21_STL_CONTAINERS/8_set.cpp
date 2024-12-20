#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
    // set
    // don't only store unique value not save duplicate
    set<int>st;
    //unordered_set<int>st;

    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(50);

    if(st.find(10) != st.end()){
        cout<<"find"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    if(st.count(15) == 0){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }


    // st.erase(st.begin(), st.end());
    // cout<<"size of set "<<st.size()<<endl; 

    set<int>::iterator it = st.begin();
    // unordered_set<int>::iterator it = st.begin();
    
    while(it != st.end()){
        cout<<*it<<" ";
        it++;
    }cout<<endl;

    // st.clear();
    // cout<<"size of set is "<<st.size()<<endl;

    // if(st.empty() == true){
    //     cout<<"set is empty() "<<endl;
    // }
    // else{
    //     cout<<"set is not empty "<<endl;
    // }



    return 0;
}
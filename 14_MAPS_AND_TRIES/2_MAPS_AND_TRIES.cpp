#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
    // string str = "thiruanathapuran";
    string str = "jjaywant";
    unordered_map<char,int> freq;


//    freq['j'] = 1;



    for(int i = 0; i<str.length(); i++){
        char ch = str[i];
        freq[ch]++;
    }

    for(auto i : freq){
        cout<<i.first<<" "<<i.second<<endl;
    }



    return 0;
}
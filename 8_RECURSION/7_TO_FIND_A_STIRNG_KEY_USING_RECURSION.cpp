#include<iostream>
#include<cstring>
using namespace std;

void keyfind(string s, int n, int i, char key){
    if( i >= n){
        return;
    }
    if(s[i] == key){
        cout<<i<<endl;
    }
    keyfind(s,n,i+1,key);
}

int main()
{
    string s = "jwweray";
    int n = s.length();
    char key = 'a';
    int i = 0;

    keyfind(s,n,i,key);

    

    return 0;
}
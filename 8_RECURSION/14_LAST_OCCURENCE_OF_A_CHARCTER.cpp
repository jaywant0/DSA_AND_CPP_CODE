#include <iostream>
#include <cstring>

using namespace std;

void lastoccurenceltor(string &s, char x, int i, int& ans){
    if(i >= s.size()){
        return;
    }
    if(s[i] == x){
        ans = i;
    }
    lastoccurenceltor(s,x,i+1,ans);
}

void lastoccurencertol(string &s, char x, int i, int& ans){
    if(i <= 0){
        return;
    }
    if(s[i] == x){
        ans = i;
        return;
    }
    lastoccurencertol(s,x,i+1,ans);
}




int main()
{
    string s= "abcadedfag";
    int ans = -1;
    char x = 'd';
    lastoccurenceltor(s,x,0,ans);
    cout<<ans<<endl;
    lastoccurencertol(s,x,0,ans);
    cout<<ans<<endl;




    return 0;
}
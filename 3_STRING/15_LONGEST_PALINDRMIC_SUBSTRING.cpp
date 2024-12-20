#include <iostream>
#include <cstring>

using namespace std;
bool ispalindrome(string s,int start,int end){
    while(start<end){
        if(s[start] != s[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

string longestpalindrome(string s){
    string ans = "";
    for(int i=0; i<s.size(); i++){
        for(int j = i; j<s.size(); j++){
            if(ispalindrome(s,i,j)){
                string t = s.substr(i,j-i+1);
                ans = t.size() > ans.size() ? t:ans;
            }
        }
    }
    return ans;
}

int main()
{
    string s = "babad";
   string j = longestpalindrome(s);
   cout<<j<<endl;




    return 0;
}
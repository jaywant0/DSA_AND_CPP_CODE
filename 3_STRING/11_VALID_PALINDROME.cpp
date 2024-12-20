#include <iostream>
#include<cstring>
using namespace std;

bool checkpalindrome(string s, int i , int j){
    while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

bool validpalindrome(string s){
    int i =0; 
    int j = s.length()-1;

    while(i<= j){
        if(s[i] != s[j]){
            return checkpalindrome(s,i+1,j) || checkpalindrome(s, i,j-1);
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string s = "noon";
   cout<<validpalindrome(s);

    return 0;
}
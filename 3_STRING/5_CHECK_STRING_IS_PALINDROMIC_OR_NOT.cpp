#include <iostream>
#include<cstring>
using namespace std;

bool palindrome(char word[]){
    int n = strlen(word);
    int s = 0; 
    int e = n-1;
    while(s <= e){
        if(word[s] != word[e]){
            return false;
        
        }
        else{
            s++;
            e--;
        }
        return true;
    }
}

int main()
{
    char ch[100] = {"noon"};
    // cin.getline(ch,100);
    // cin>>ch[100];

     cout<<palindrome(ch);
    
    return 0;
}
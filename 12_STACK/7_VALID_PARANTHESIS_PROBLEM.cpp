#include <iostream>
#include <stack>
using namespace std;

bool isvalid(string s){
    stack<char> st;
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
    // opening bracket
    if(ch == '(' || ch == '{' || ch == '[' ){
        st.push(ch);
    }
    else{
        //closing bracket
        if(!st.empty()){
            char topch = st.top();
            if(ch == ')' && topch == '('){
                // matching bracket
                st.pop();
            }
            else if(ch == '}' && ch == '{'){
                st.pop();
            }
            else if(ch == ']' && ch =='['){
                // matching 
                st.pop();
            }
            else{
                //brackets are not matching
                return false;
            }
        }
        else{
            return false;
        }
      }
    }
    // if(s.empty()){
    //     //valid 
    //     return true;
    // }
    // else{
    //     return false;
    // }
}

int main()
{
    string a = "( )";


    return 0;
}
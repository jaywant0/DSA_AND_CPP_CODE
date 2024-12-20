#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int longestvalidparanthesis(string s){
    stack<int> st;
    st.push(-1);
    int maxlen = 0;

    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        if(ch == '(' ){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()){
                st.push(i);
            }
            else{
                int len = i- st.top();
                maxlen = max(len, maxlen);
            }
        }
    }
    return maxlen;
}



int main()
{
    string s = ")()()(())(";
    cout<<longestvalidparanthesis(s);

    return 0;
}
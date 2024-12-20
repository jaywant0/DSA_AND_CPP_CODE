#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> st;
    
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<"size of stack is "<<st.size()<<endl;

    st.pop();
    cout<<"size of stack is "<<st.size()<<endl;

    cout<<"top element of stack is "<<st.top()<<endl;


    if(st.empty() == true){
        cout<<"stack is  empty "<<endl;
    }
    else{
        cout<<"stack is not empty "<<endl;
    }

    // stack can't iterator using iterator  





    return 0;
}
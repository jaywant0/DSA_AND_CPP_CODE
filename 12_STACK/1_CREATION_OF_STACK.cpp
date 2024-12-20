#include<iostream>
#include<stack>
using namespace std;


int main ()
{
    // creation of stack
    stack<int> st;

    // inseration of stack

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
    st.push(100);
    st.push(110);

    // remove
    st.pop();

    // check element on the top

    cout<<"element on top is "<<st.top()<<endl;

    // size
    cout<<"size of stack "<<st.size()<<endl;

    // stack is empty or not check code
    if(st.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty "<<endl;
    }

    //printing the stack element
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl<<endl<<endl;


    // in stack only five think happen
    // push
    // pop
    // size
    // empty
    // top   -> this is used to access top element in an stack

    stack<string> jay;
    jay.push("ram");
    jay.push("viru");
    jay.push("piyush");
    jay.push("prathmesh");
    jay.push("yash");
    jay.push("suraj");

    jay.pop();

    cout<<"Size of string  is "<<jay.size()<<endl;

    if(jay.empty()){
        cout<<"the string empty "<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

    while(!jay.empty()){
        cout<<jay.top()<<" ";
        jay.pop();
    }
    cout<<endl;









    return 0;
}



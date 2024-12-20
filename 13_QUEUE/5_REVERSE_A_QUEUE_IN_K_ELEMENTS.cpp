#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseink(queue<int> &q, int k){
    // step  queue k element stack
    stack<int> s;
    int n = q.size();
    int count = 0;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count == k){
            break;
        }
    }
    // step b stack  main vapas
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    // step c push n-k from q front to bac && n-k != q
    count = 0;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
     if(count == n-k){
        break;
    }
  }
}


int main()
{
    queue<int> st;
    st.push(3);
    st.push(6);
    st.push(9);
    st.push(12);
    st.push(15);

    int k = 3;
    reverseink(st,k);

    while(!st.empty()){
        cout<<st.front()<<" ";
        st.pop();
    }





    return 0;
}

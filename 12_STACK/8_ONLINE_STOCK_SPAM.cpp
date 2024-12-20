#include <iostream>
#include<stack>
using namespace std;

stack<pair<int,int>> st;
stockspanner(){
}
int next(int price){
    int span = 1;
    while(!st.empty() && st.top().first <= price){
        span += st.top().second;
        st.pop();
    }
    st.push({price,span});
    return span;
}


int main()
{
    




    return 0;
}
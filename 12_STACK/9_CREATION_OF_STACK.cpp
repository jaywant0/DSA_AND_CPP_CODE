#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        arr = new int [size];
        this->size = size;
        top = -1;
    }
};

// FUNCTION
void push(int data){
    if(size - top >1){
        //space available;
        // insert
        top++;
        arr[top] = data;
    }
    else{
        //space not availabel
        cout<<"stack is overflow "<<endl;
    }
}

void pop(int data){
    if(top == -1){
        // stack is empty
        cout<<"stack is underflow can't delete element "<<endl;
    }
    else{
        //stack is empty
        top--;
    }
}

int gettop(){
    if(top == -1){
        cout<<"there is not element in stack "<<endl;
    }
    else{
        return arr[top];
    }
}

int getsize(){
    return top+1;
}

bool isempty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

int main()
{



    return 0;
}
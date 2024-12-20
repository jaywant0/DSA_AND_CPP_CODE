#include<iostream
using namespace std;

class queue1{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    queue1(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
};

void push(int data){
    if(rear == size){
        cout<<"queue is full "<<endl;
    }
    else{
        arr[rear] == data;
        rear++;
    }
}

void pop(){
    if(front == rear){
        cout<<"queue is empty"<<endl;
    }
    else{
        arr[front] = -1;
        front++;
        if(front == rear){
            front = 0;
            rear = 0;
        }
    }
}


int main()
{
    queue1<int> q1;
    q1.push(10);
    q1.push(20);





    return 0;
}

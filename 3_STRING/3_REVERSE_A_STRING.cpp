#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[100] = {"jaywant"};
    int length = strlen(ch);
    int k = 0;
    int i = length-1;
    while(k <= i){
        swap(ch[k],ch[i]);
        k++;
        i--;
    }
    for(int i =0; i<length; i++){
        cout<<ch[i];
    }

}
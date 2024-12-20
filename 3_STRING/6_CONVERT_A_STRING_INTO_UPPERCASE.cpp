#include<iostream>
#include<cstring>

using namespace std;

char uppercase(char arr[]){
    int n = strlen(arr);
    for(int i =0; i<n; i++){
        arr[i] = arr[i] -'a'+ 'A';
    }
}

int main()
{
    char ch[100] = {"jaywant"};
    uppercase(ch);
    int n = strlen(ch);

    cout<<ch<<endl;

    // for(int i = 0; i<n; i++){
    //     cout<<ch[i];
    // }






    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    // take 5 i/p in an array

    // int arr[5];
    
    // for(int i = 0; i<5; i++){
    //     cout<<"enter the number "<<endl;
    //     cin>>arr[i];
    // }
    
    char arr[26];
   int n =26;

    for(char i = 0; i<n; i++){
        cout<<"enter the chacter "<<endl;
        cin>>arr[i];
    }

    for(char i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
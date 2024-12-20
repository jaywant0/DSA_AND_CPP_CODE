#include <iostream>
#include<string>
using namespace std;


int main()
{
    char ch[10] = {'a','b','c','d','e','f','g','h','i','j'};

    for(int i =0; i<10; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
    // cout<<"enter the string : "<<endl;
    // cin>>ch[11];
    // cout<<ch[11];

    // in a charcer it always gives a empty in last of arrays that shwos the string or chracter is now finished
    // char name[100];
    // cout<<"enter the name "<<endl;
    // cin>>name;
    // for(int i =0; i<7; i++)
    // {
    //     cout<<"index : "<<i<<"  value : b"<<name[i]<<endl;
    // }


    char jay[100];
    cout<<"enter the name of jay "<<endl;
    // cin>>jay;
    cin.getline(jay,100);
    cout<<jay<<endl;



    return 0;
}

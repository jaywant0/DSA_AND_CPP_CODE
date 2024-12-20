#include<iostream>
using namespace std;

int main()
{
    int n = 5 ;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i ; j++){
            cout<<"*";
        }
        for(int k = 0; k<i; k++){
            cout<<"  " ;
        } 
        for(int h = 0; h<n-i; h++){
            cout<<"*" ;
        } 
        cout<<endl;
    }
    for(int i =0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<"*";
        }
         for(int k = 0; k< 2*n-2*i-1;/*n-i;*/ k++){
            cout<<" " ;
        }
        for(int m = 0; m<i+1; m++){
            cout<<"*";
        }
        cout<<endl;

        // no5te
       // k< 2*n-2*i-1;

    }




    return 0;
}
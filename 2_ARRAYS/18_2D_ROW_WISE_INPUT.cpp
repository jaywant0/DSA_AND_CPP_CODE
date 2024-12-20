#include <iostream>
using namespace std;

int main()
{
          int arr[5][5];
       for(int i = 0 ; i<5; i++){
        cout<<"enter the input "<<endl;
        for(int j =0; j<5; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i =0; i<5; i++){
        for(int j = 0; j<5 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     char arr[5][3] = {{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'}}  ;
//     for(int i = 0 ; i<3; i++){
//         for(int j =0; j<5; j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
//     // cout<<endl;
//     return 0;
// }
#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> jay;
    int a[] = {1,2,3,32,4,4,5,64,5,4,4,5,6,6,4,3,2,2,4,8,9,10};
    int n = sizeof(a)/sizeof(int);

    for(int i = 0; i<n; i++){
        int key = a[i];
        // jay[key] = jay[key] + ;
        jay[key]++;
    }

   
    cout<<"printing hash map using this loop "<<endl;

    for(auto i : jay){
        cout<<i.first<<"  =  "<<i.second<<endl;
    }



    return 0;
}
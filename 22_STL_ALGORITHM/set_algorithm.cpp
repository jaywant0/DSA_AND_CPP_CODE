#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;


int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);

    vector<int> brr;
    brr.push_back(1);
    brr.push_back(2);
    brr.push_back(3);
    brr.push_back(5);
    brr.push_back(6);


    vector<int>result;

    // set_union(arr.begin(),arr.end(), brr.begin(), brr.end(), inserter(result,result.begin()));

    // for(int a :result){
    //     cout<<a<<" ";
    // }cout<<endl;

    // set_intersection(arr.begin(),arr.end(), brr.begin(), brr.end(), inserter(result,result.begin()));
    // for(int a :result){
    //     cout<<a<<" ";
    // }cout<<endl;

    // set_difference(arr.begin(),arr.end(), brr.begin(), brr.end(), inserter(result,result.begin()));
    // for(int a :result){
    //     cout<<a<<" ";
    // }cout<<endl;

    set_symmetric_difference(arr.begin(),arr.end(), brr.begin(), brr.end(), inserter(result,result.begin()));
    for(int a :result){
        cout<<a<<" ";
    }cout<<endl;







    return 0;

}
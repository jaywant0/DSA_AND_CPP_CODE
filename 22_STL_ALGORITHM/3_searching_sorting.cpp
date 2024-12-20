#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);
    
    // int target = 20;
    // // this function helps to true or false
    // bool it = binary_search(arr.begin(), arr.end(), target);
    // cout<<it<<endl;

    auto it =  lower_bound(arr.begin(), arr.end(), 40);
    cout<<*it<<endl; 

    auto it1 = upper_bound(arr.begin(), arr.end(), 40);
    cout<<*it1<<endl;

    int a  = 10; 
    int b = 20 ;

    vector<int> brr;

    brr.push_back(10);
    brr.push_back(20);
    brr.push_back(30);
    brr.push_back(40);
    brr.push_back(5);
    brr.push_back(60);

    cout<<"maximum number is "<<max(a,b)<<endl;
    cout<<"minimum number is "<<min(a,b)<<endl;

    auto c = min_element(brr.begin(), brr.end());
    cout<<"minimum element of vector brr is "<<*c<<endl;
    auto d = max_element(brr.begin(),brr.end());
    cout<<"maximum element of vector brr "<<*d<<endl;


    return 0;
}
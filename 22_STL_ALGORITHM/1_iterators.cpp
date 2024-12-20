#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int a){
    cout<<2 * a<<" "<<endl;
}

bool checkEven(int a){
    return a%2 == 0;
}


int main()
{

    vector<int> a(6);
    a[0] = 10;
    a[1] = 20;
    a[2] = 31;
    a[3] = 40;
    a[4] = 59;
    a[5] = 60;
    // a[0] = 10;
    // a[1] = 10;
    // a[2] = 20;
    // a[3] = 20;
    // a[4] = 30;
    // a[5] = 30;
    // a.push_back(10);
    // a.push_back(20);
    // a.push_back(30);
    // a.push_back(40);
    // a.push_back(50);
    // a.push_back(60);


    // for_each
    // for_each(a.begin(), a.end(), printDouble); // for each to every interger in aarray make function 


    // int target = 20;
    // vector<int>::iterator it = find(a.begin(),a.end(),target);

    // find
    // auto  it = find(a.begin(),a.end(),target);
    // cout<<*it<<endl;

    // find_if
    // auto it1=  find_if(a.begin(),a.end(),checkEven);
    // cout<<*it1<<endl;

    // count
    // int cnt = 20;
    // int ans = count(a.begin(), a.end(),cnt);
    // cout<<ans<<" "<<endl;

    // count_if
    // auto it2 = count_if(a.begin(), a.end(),checkEven);
    // cout<<it2<<endl;

    // SORT
    // sort(a.begin(), a.end());
    // for(int i = 0; i<a.size(); i++){
    //     cout<<a[i]<<" ";
    // }
    // for(int i : a){
    //     cout<<i<<" ";
    // }cout<<endl;

    // reverse(a.begin(),a.end());
    // for(int i :a){
    //     cout<<i<<" ";
    // }
            //    rotate
    // rotate(a.begin(), a.begin() + 3, a.end() ) ;

    //  for(int it : a){
    //     cout<<it<<" ";
    //  }
    //  cout<<endl;

    //  auto it = unique(a.begin(), a.end());

    //  a.erase(it,a.end());

    //  for(int it1 : a){
    //     cout<<it1<<" ";
    //  }

    auto it = partition(a.begin(), a.end() ,checkEven);

    for(int b : a){
        cout<<b<<" ";
    }




    return 0;
}
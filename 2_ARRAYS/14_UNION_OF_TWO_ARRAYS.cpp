#include<iostream>
#include <vector>
#include<limits.h>
#include <algorithm>
using namespace std;
int main()
{
   vector<int> a1 = {1,3,5,7,9,10};
   vector<int>a2 = {1,2,3,4,6,8,11,};
   vector<int>a;

   for(int i = 0; i<a1.size();i++){
      a.push_back(a1[i]);
   }

   for(int i = 0; i<a2.size();i++){
      a.push_back(a2[i]);
   }

   sort(a.begin(),a.end());

   // for(int i = 0; i<a.size(); i++){
   //    for(int j = 1; j<a.size(); j++){
   //       if(a[i] == a[j]){
   //          a.push_back(a[i]);
   //       }
   //    }
   // }

   for(int k = 0; k<a.size(); k++){
        cout<<a[k]<<" ";
   }
}
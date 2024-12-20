#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    int target = 11;
    sort(a.begin(),a.end());

    bool found = false;
    for(int i =0; i<a.size(); i++){
        int lo = i+1; 
        int hi = a.size()-1;

        while(lo<hi){
            int current = a[i] + a[lo] + a[hi];
            if(current == target){
                found = true;
                // cout<<"true"<<endl;
                 cout<<"("<<a[i]<<","<<a[lo]<<","<<a[hi]<<")"<<endl;
            }
            if(current < target){
                lo++;
            }
            else{
                hi--;
            }
        }
    }

    if(found){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0; 

    

}
#include<iostream>
#include<unordered_map>
using namespace std;

string issubset(int a1[], int a2[], int n, int m){
    unordered_map<int,int> map;
    string ans = "yes";
    
    // map hashing using a2
    for(int i = 0; i<n; i++){
        map[a1[i]]++;
    }
    // check whetever all elements of a2 present in a1 or not
    for(int i = 0; i<m; i++){
        if(map.find(a2[i]) == map.end()){
            ans = "No";
            break;
        }
        else{
            // check present or not
            if(map[a2[i]] > 0){
                map[a2[i]]--;
            }
            else{
                ans =  "No";
                break;
            }
        }
    }
    return ans;
}

int main()
{
    int a1[] ={11,7,1,13,21,3,7,3};
    int a2[] = {11,3,7,1,7};

    int n = sizeof(a1)/sizeof(int);
    int m = sizeof(a2)/sizeof(int);

   cout<< issubset(a1,a2,n,m);





    return 0;
}


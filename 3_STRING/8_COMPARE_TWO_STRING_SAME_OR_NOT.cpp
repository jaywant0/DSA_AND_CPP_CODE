#include <iostream>
#include<cstring>
using namespace std;

bool compare(string a,string b){
    if(a.length() != b.length()){
        return false;
    }
    else{
        int i = 0;
        int j = 0;
        for(int i = 0; i<a.length(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
}
int main()
{
    string a = "jay";
    string b =  "hay";
    cout<<compare(a,b)<<endl;
    return 0;
}
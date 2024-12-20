#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


string convert(string s,int numrows){
    if(numrows == 1){
        return s;
    }
    vector<string> zigzag(numrows);
    int i = 0;
    int row = 0;

    bool direction = 1;

    while(true){
        if(direction){
            while(row < numrows && i < s.size()){
                zigzag[row++].push_back(s[i]);
            }
            row = numrows-2;

        }
        else{
            while(row>= 0 && i<s.size()){
                zigzag[row--].push_back(s[i++]);
            }
            row = 1;
        }
        if(i >= s.size()){
            break;
        }
        direction = !direction;
    }
    string ans = "";
    for(int i= 0; i<zigzag.size(); i++){
        ans = ans + zigzag[i];
    }
    return ans;

}

int main()
{
    string s  = "ABCDEFGHIJ";
    int rows = 3;
    convert(s,3);







    return 0;
}
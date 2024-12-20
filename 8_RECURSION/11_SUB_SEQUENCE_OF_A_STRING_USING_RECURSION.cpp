#include <iostream>
#include<vector>
#include<cstring>
#include<limits>

using namespace std;

void printsubsequences(string str, string output, int i ){
    // base case
    if(i >=  str.length()){
         cout<<output<<endl;
        return;
    }
    // exclude
    printsubsequences(str,output, i+1);

    // include
     output.push_back(str[i]);

    printsubsequences(str,output,i+1);

}

int main()
{
    
    string str = "xyz";
    string output = " ";
    int i = 0;
    printsubsequences(str,output,i);
    // int n = str.length();
    // cout<<n<<endl;
    return 0;

    
}
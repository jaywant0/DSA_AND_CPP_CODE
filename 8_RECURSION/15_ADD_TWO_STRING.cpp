#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

string addre(string num1, int p1, string num2, int p2, int carry= 0){
    // base case
    if(p1 < 0 && p2 < 0){
        if(carry != 0){
            return string (1,carry+'0');
        }
        return "";
    }
    // solve 1 case
    int n1 = (p1 >= 0 ? num1[p1]:'0')- '0';
    int n2 = (p2 >= 0 ? num2[p2]: '0') - '0';
    int csum = n1 + n2 + carry;
    int digit = csum % 10;
    carry = csum % 10;
    string ans = "";
    ans.push_back(digit +'0');

    // RE
    ans += addre(num1, p1-1, num2, p2-1 ,carry);
    return ans;
}

string addstrings(string num1, string num2){
    string ans = addre(num1, num1.size()-1,num2, num2.size()-1);

    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string n1  = "11";
    string n2  = "123";
    int p1 = 0;
    int p2 = 0;
    
  cout<<addstrings(n1,n2);


    return 0;
}
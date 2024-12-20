#include <iostream>
#include <vector>
using namespace std;

vector<pair<int,string>>mp = {{1000000000, "Billion"}, {1000000, "Millionn"},{1000, "Thousand"},{100,"Hundred"},{90, "Ninety"}
,{80, "Eighty"},{70,"seventy"},{60,"sixty"},{50,"fifty"},{40,"fourty"},{30,"Thirty"},{20,"twenty"},{19,"nineteen"},{18,"eighteen"},
{17,"seventeen"},{16,"sixteen"},{15,"fifteen"},{14,"fourteen"},{13,"thirteen"},{12,"twele"},{11,"eleven"},{10,"ten"},{9,"nine"},
{8,"eight"},{7,"seven"},{6,"six"},{5,"five"},{4,"four"},{3,"three"},{2,"two"},{1,"one"}};

string numbertoword(int num){
    if(num == 0){
        return "zero";
    }
    
    for(auto it : mp){
        if(num >= it.first){
            string a = "";
        if(num >= 100){
            a = numbertoword(num/it.first) + " ";
        }
            string b = it.second;
            string c = "";
        if(num % it.first != 0){
            string c = " " + numbertoword(num % it.first);
        }
        return a + b + c;
        }
    }
    return "";
}



int main()
{
    int a = 458795;
   string num =  numbertoword(a);
   cout<<num;





    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void getsubsequnces(string str){
  vector<string>ans;
  int n  = str.length();

  for(int num = 0; num < (1<<n); num++){
    string temp = "";
    // we will create subsequences 
    for(int i = 0; i<n; i++){
      char ch = str[i];
      if(num & (1 << i)){
        temp.push_back(ch);
      }
    }
    if(temp.length() >= 0){
      // store in ans
      ans.push_back(temp);
    }
  }
  cout<<"printing the subsequences "<<endl;
  for(auto i: ans){
    cout<<i<<endl;
  }
}



int main()
{
  string str = "abc";
  getsubsequnces(str);

}
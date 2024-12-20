#include <iostream>
#include<cstring>
using namespace std;

string removestring(string s, string part){
    int jay = s.find(part);
    while(jay != string:: npos){
        s.erase(jay, part.length());
        jay = s.find(part);
    }
    return s;
}
int main()
{
    string s = "ramlaxmanjaywant";
    string v = "jay";

    int r = s.find(v);
    cout<<r<<endl;
    cout<<removestring(s,v);
    

    return 0;
}
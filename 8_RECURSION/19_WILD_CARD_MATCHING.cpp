#include<iostream>
#include<cstring>

using namespace std;

bool ismatchhelper(string &s, int si, string &p,int pi){
    // base case
    if(si == s.size() && pi == p.size()){
        return true;
    }
    if(si == s.size() && pi < p.size()){
        while(pi < p.size()){
            if(p(pi) != '*') return false;
            pi++;
        }
        return true;
    }
    // single char matching
    if(s[si] == p[pi] || '?' == p[pi]){
        return ismatchhelper(s,si+1,p, pi+1);
    }

    if(p[pi] == '*'){
        // treat '* as empty or null
        bool caseA = ismatchhelper(s,si,p,pi+1);
    }
    // let * consume one char
    bool caseB = ismatchhelper(s,si+1,p ,pi);
    return caseA || caseB;

    // char does'nt match
    return false;
}

int main()
{


}
#include <iostream>
#include <vector>

using namespace std;

int mincosttickets_helper(vector<int>&days, vector<int>&costs,int i){
    // base case
    if(i >= days.size()) return 0;

    // solution for one case
    // 1 day pass taken

    int cost1 = costs[0] + mincosttickets_helper(days, costs,i+1);

    // 7 day pass taken
    int passendday = days[i] + 7 -1;
    int j = i;
    while(j< days.size() && days[j] <= passendday){
        j++;
    }
    int cost7 = costs[1] + mincosttickets_helper(days, costs, j);

    // 30 day  pass taken
    passendday = days[i] + 30 -1;
    j = i;
    while( j< days.size() && days[j] <= passendday){
        j++;
    }
    int cost30 = costs[2] + mincosttickets_helper(days,costs,j);

    return min(cost1,min(cost7,cost30));
    
}

int mincosttickets(vector<int>&days,vector<int>&costs){
    return mincosttickets_helper(days,costs,0);
}


int main()
{
   vector< int> a = {1,4,6,7,8,20,21};
    vector<int>  b = {2,7,15};
 
   int i = mincosttickets(a,b);
   cout<<i;
     

    return 0;
}
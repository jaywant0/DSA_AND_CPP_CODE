#include <iostream>
using namespace std;

int setkthbit(int n, int k ){
   return n | (k << 1);
}


int main()
{
    int k = 15;
    int n = 3;
    setkthbit(n,k);





    return 0;
}



//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        int mask = 1 << K;
        int ans = N | mask;
        return ans;
    }
    
};


//   int setKthBit(int N, int K)
//     {
//         // Write Your Code here
//         int mask = 1 << K;
//         int ans = N | mask;
//         return ans;
//     }



//{ Driver Code Starts.
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int N, K;
//         cin >> N >> K;
        
//         Solution ob;
//         int ans = ob.setKthBit(N,K);
//         cout << ans << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends
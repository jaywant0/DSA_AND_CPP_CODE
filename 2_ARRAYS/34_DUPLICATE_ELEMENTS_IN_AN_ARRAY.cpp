#include<iostream>
#include <vector>

using namespace std;
int main()
{
    int arr[5] = {2,3,1,2,3};
    int  n = 5;
    // vector<int> ans;
    // int brr[5] = {0,0,0,0,0};

    // for(int i = 0 ; i<n; i++){
    //     brr
        
    //         }

    vector<int> ans;
    for(int i = 0; i<n; i++){
        int index = arr[i]%n;
        arr[i] = arr[index]+n;
    }

    for(int i = 0; i<n; i++){
        if(arr[i / n] >= 2){
            ans.push_back(i);
        }
    }

   




    return 0;
}




// // //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution{
//   public:
//     vector<int> duplicates(int arr[], int n) {
//         // code here
//         vector<int> ans;
//         for(int i = 0; i<n; i++){
//             int index = arr[i]%n;
//             arr[index] += n;
//         }
        
//         for(int i =0;i<n; i++){
//             if((arr[i]/n) >= 2){
//                 ans.push_back(i);
//             }
//         }
        
//         if(ans.size()== 0) return {-1};
//         return ans;
//     }
// };


// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++) cin >> a[i];
//         Solution obj;
//         vector<int> ans = obj.duplicates(a, n);
//         for (int i : ans) cout << i << ' ';
//         cout << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends
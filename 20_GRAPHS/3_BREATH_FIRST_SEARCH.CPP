#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
// template<typename T> 

class Graph
{
    public:
    unordered_map<int,list<int>>adjlist;
    void addedge(int u, int v ,bool direction){
        // direction  0-> undirected graph
        // direction  1-> directed graph
        //create an edge from u and v
        
        adjlist[u].push_back(v);
        if(direction == 0){
            //undirected edge
            // create an edge v and u
            adjlist[v].push_back(u);
        }
    }

    void printadjacentarylist(){
        for(auto node: adjlist){
            cout<<node.first<<"  ->  ";
            for(auto neighbour: node.second){
                cout<<neighbour<<" ";   
            }
        cout<<endl;
   
        }
    }

    void BFS(int src){
    queue<int>q;
    unordered_map<int,bool>visited;
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        cout<<frontnode<<",";

        for(auto neighbour : adjlist[frontnode]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }
}


};




int main()
{
    Graph g;

    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(0,2,0);
    
    g.printadjacentarylist();
    

}




























// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     // Function to return Breadth First Traversal of given graph.
//     vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//         // Code here
        
//         int visited[V] = {0};
//         visited[0] = 1;
        
//         queue<int> q;
//         vector<int> BFS;
        
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             BFS.push_back(node);
            
//             for(auto it: adj[node]){
//                 if(!visited[it]){
//                     visited[it] = 1;
//                     q.push(it);
//                 }
//             }
//         }
//         return BFS;
        
//     }
// };

        
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >>

//             E;

//         vector<int> adj[V];

//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             // 		adj[v].push_back(u);
//         }
//         // string s1;
//         // cin>>s1;
//         Solution obj;
//         vector<int> ans = obj.bfsOfGraph(V, adj);
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

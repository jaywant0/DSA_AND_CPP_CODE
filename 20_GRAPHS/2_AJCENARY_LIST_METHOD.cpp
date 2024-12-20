#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;
template<typename T> 

class Graph
{
    public:
    unordered_map<T,list<T>>adjlist;
    void addedge(T u, T v ,bool direction){
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
};

class Graph1
{
    public:
    unordered_map<int,list<pair<int,int>>>adjlist;
    void addedge1(int u,int v ,int weight ,bool direction){
        // direction  0-> undirected graph
        // direction  1-> directed graph
        //create an edge from u and v
        
        adjlist[u].push_back({v,weight});
        if(direction == 0){
            //undirected edge
            // create an edge v and u
            adjlist[v].push_back({u,weight});
        }
    }

    void printadjacentarylist(){
        for(auto node: adjlist){
            cout<<node.first<<"  ->  ";
            for(auto neighbour: node.second){
                cout<<"("<<neighbour.first<<","<<neighbour.second<<")";   
            }
        cout<<endl;
   
        }
    }

};

int main()
{
    Graph1 g1;
    //undirected graph
    g1.addedge1(0,1,5,1);
    g1.addedge1(1,2,8,1);
    g1.addedge1(0,2,6,1);

    g1.printadjacentarylist();

   cout<<endl;

    Graph<int> g;

    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(0,2,0);

    // cout<<endl;
    g.printadjacentarylist();

    // int n;
    // cout<<"Enter the number of nodes :"<<endl;
    // cin>>n;

    // int e;
    // cout<<"Enter the numbe of edges "<<endl;
    // cin>>e;


}
/*Contributed by Debanga Bhuyan, B.Tech NIT Silchar*/

/* This function is used to detect a cycle in undirected graph

*  g[]: array of vectors to represent graph
*  V: number of vertices
*/
#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<int> g[],int V, bool vis[],int start, int parent){
    vis[start]=true;
    for(auto x:g[start]){
        if(!vis[x]){
            if(dfs(g,V,vis,x,start)){
                return 1;
            }
        }else if(x!=parent){
                return 1;
        }
    }
    return 0;
}

bool isCyclic(vector<int> g[], int V)
{
   // Your code here
   bool vis[V];
   memset(vis,0,sizeof(vis));
   
   for(int i=0;i<V;i++){
       if(!vis[i]){
           if(dfs(g,V,vis,i,-1))
                return true;
       }
   }
   return false;
   
}

// { Driver Code Starts.


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
  // } Driver Code Ends

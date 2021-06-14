/*Contributed by Debanga Bhuyan, B.Tech NIT Silchar*/

/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/
#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<int> g[],bool vis[],int start,bool anc[]){
    vis[start]=1;
    anc[start]=1;
    for(auto node:g[start]){
        if(!vis[node]){
            if(dfs(g,vis,node,anc)){
                return 1;
            }
        }
        else if(anc[node]){
            return true;
        }
    }
    anc[start]=0;
    return 0;
}

bool isCyclic(int V, vector<int> adj[])
{
    // Your code here
    bool vis[V], anc[V];
    memset(vis,0,sizeof(vis));
    memset(anc,0,sizeof(anc));
    
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(dfs(adj,vis,i,anc)){
                return true;
            }
        }
    }
    return false;
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends

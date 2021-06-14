//Contributed by: Debanga Bhuyan

// Flood Fill Algorithm 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void flood(vector<vector<int>>&image,int x,int y,int val,int nc,vector<vector<bool>>&vis){
        if(x<0 || y<0 || x>=image.size() || y>=image[0].size() || image[x][y]!=val || vis[x][y])
                return;
        image[x][y]=nc;
        vis[x][y]=1;
        flood(image,x+1,y,val,nc,vis);
        flood(image,x-1,y,val,nc,vis);
        flood(image,x,y-1,val,nc,vis);
        flood(image,x,y+1,val,nc,vis);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here https://media.geeksforgeeks.org/img-practice/play-1596780125.svg
        int val=image[sr][sc];
        vector<vector<bool>>vis(image.size(),vector<bool>(image[0].size(),0));
        flood(image,sr,sc,val,newColor,vis);
        return image;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends

// Contributed by Debanga Bhuyan,B.Tech NIT Silchar

// Backtracking solution to Rat in a Maze problem

#include <bits/stdc++.h>
using namespace std;

#define MAX 5
vector<string> printPath(int m[MAX][MAX], int n);
// Position this line where user code will be pasted.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int m[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }

        vector<string> result = printPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

// m is the given matrix and n is the order of matrix
// MAX is the upper limit of N ie 5
void helper(int m[MAX][MAX],int i,int j,int n,vector<string>&res,string path)
{
    if(i<0 || i>=n || j<0 || j>=n || m[i][j]!=1)
    return;
    if(i==n-1 && j==n-1){
        res.push_back(path);            
        return ;
    }
    m[i][j]=-1;
    helper(m,i+1,j,n,res,path+'D');
    helper(m,i-1,j,n,res,path+'U');
    helper(m,i,j+1,n,res,path+'R');
    helper(m,i,j-1,n,res,path+'L');
    m[i][j]=1;
}
vector<string> printPath(int m[MAX][MAX], int n) {
    vector<string>res;
    string s="";
    helper(m,0,0,n,res,s);
    sort(res.begin(),res.end());
    return res;     
}


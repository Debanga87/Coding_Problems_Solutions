// Contributed By: Debanga Bhuyan

// Longest Common Subsqeuence of three given strings (DP-2 variation)

#include<bits/stdc++.h>
using namespace std;

int LCSof3 (string A, string B, string C, int n1, int n2, int n3);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        cout << LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}

// } Driver Code Ends


int LCSof3 (string A, string B, string C, int n, int m, int o)
{
    // your code here
    int dp[n+1][m+1][o+1];
    memset(dp,0,sizeof dp);
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            for(int k=1;k<o+1;k++){
                if(A[i-1]==B[j-1] && B[j-1]==C[k-1]){
                    dp[i][j][k]=1+dp[i-1][j-1][k-1];
                }else{
                    dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                }
            }
        }
    }
    return dp[n][m][o];
}

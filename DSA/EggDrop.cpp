//Contributed by: Debanga Bhuyan

// Matrix Chain Multiplication solution for Egg Dropping problem

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        // your code here
        int dp[n+1][k+1];
        memset(dp,0,sizeof dp);
        // floors-0-0,1-1; eggs-0-invalid,1-floors
        for(int i=1;i<n+1;i++){             //i==eggs
            for(int j=1;j<k+1;j++){         //j==floors
                if(i==1){                   //eggs 1 f floors check
                    dp[i][j]=j;
                }else if(j==1){             //floors 1 check once
                    dp[i][j]=1;
                }else{
                    int ele=INT_MAX;
                    for(int k=j-1,l=0;k>=0;k--,l++){
                        int v1=dp[i][k];        //survives
                        int v2=dp[i-1][l];      //breaks
                        int val=max(v1,v2);
                        ele=min(val,ele);
                    }
                    dp[i][j]=ele+1;
                }
            }                      
        }
        return dp[n][k];
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends

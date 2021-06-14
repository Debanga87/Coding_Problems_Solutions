/*Contributed by Debanga Bhuyan, B.Tech NIT Silchar*/

//Below given is the solution to the Celebrity problem in geeksforgeeks
//https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1 

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int a=0,b=n-1;
        while(a<b){
            if(M[a][b]==1)
                a++;
            else
                b--;
        }
        for(int i=0;i<n;i++){
            if(i!=a){
                if(M[a][i]==1 || M[i][a]==0){
                    return -1;
                }
            }
        }
        
        return a;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends

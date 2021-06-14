/*Contributed by Debanga Bhuyan, B.Tech NIT Silchar*/

/*
 * Solution to the famous Box Stacking problem, variation of the LIS problem.(DP-3)
*/
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*The function takes an array of heights, width and 
    length as its 3 arguments where each index i value 
    determines the height, width, length of the ith box. 
    Here n is the total no of boxes.*/
    static bool comp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b){
        return a.first.first*a.first.second>b.first.first*b.first.second;
    }
    
    int maxHeight(int height[],int width[],int length[],int n)
    {
        //Your code here
        vector<pair<pair<int,int>,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({{height[i],width[i]},length[i]});
            v.push_back({{height[i],length[i]},width[i]});
            v.push_back({{length[i],width[i]},height[i]});
        }
        n*=3;
        sort(v.begin(),v.end(),comp);
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=v[i].second;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int a=v[i].first.first, b=v[i].first.second;
                int c=v[j].first.first, d=v[j].first.second;
                if(min(c,d)>min(a,b) && max(c,d)>max(a,b)){
                    dp[i]=max(dp[i],dp[j]+v[i].second);
                }
            }
        }
        return *max_element(dp,dp+n);
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        
    
        int A[105],B[105],C[105];
        for(int i = 0; i < n; i++)cin >> A[i];
        for(int j = 0; j < n; j++)cin >> B[j];
        for(int k = 0; k < n; k++)cin >> C[k];
        Solution ob;
        cout<<ob.maxHeight(A,B,C,n)<<endl;
    }
	
	return 0;
}
	  // } Driver Code Ends

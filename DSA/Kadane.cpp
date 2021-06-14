//Contributed by Debanga Bhuyan, B.Tech NIT Silchar

//	Kadane's algorithm to find maximum subarray sum

#include <bits/stdc++.h>
using namespace std;
// Function to find subarray with maximum sum
// arr: input array
// n: size of array

int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int currsum=0, maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        currsum=max(currsum,0);
    }
    return maxsum;
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends

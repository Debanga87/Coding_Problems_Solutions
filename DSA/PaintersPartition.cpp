// Contributed by: Debanga Bhuyan

// Binary Search solution for allocating max boards to get work done in minimum time

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool isValid(int *arr,int n,int k,long long sum){
        int painters=1;
        long long mx=0;
        for(int i=0;i<n;i++){
            mx+=arr[i];
            if(mx>sum){
                painters++;
                mx=arr[i];
            }
            if(painters>k){
                return 0;
            }
        }
        return 1;
    }
    
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long start=INT_MIN,end=0,mid=0,res=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>start){
                start=arr[i];
            }
        }
        for(int i=0;i<n;i++)
            end+=arr[i];
        while(start<=end){
            mid=start+(end-start)/2;
            if(isValid(arr,n,k,mid)){
                end=mid-1;
                res=mid;
            }else{
                start=mid+1;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends

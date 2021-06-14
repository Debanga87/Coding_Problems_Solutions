#include<bits/stdc++.h>
using namespace std;
 
bool isValid(vector<int> arr,int n,int c,int mid){
	int cows=1,x=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]-x>=mid){
			x=arr[i];
			cows++;
		}
		if(cows==c)
			return true;
	}
	return false;
}
 
int findMinDist(vector<int> arr,int n,int c){
	sort(arr.begin(),arr.end());
	int start=1,end=arr[n-1]-arr[0],res=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(isValid(arr,n,c,mid)){
			res=mid;
			start=mid+1;
		}else
			end=mid-1;
	}
	return res;
}
 
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<findMinDist(arr,n,c)<<'\n';
	}
	return 0;
} 

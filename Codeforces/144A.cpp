#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int count=0,mx=INT_MIN,mn=INT_MAX,idxg=-1,idxs=-1;
	for(int i=0;i<n;i++){
		if(arr[i]>mx){
			mx=arr[i];
			idxg=i;		//max element index found
		}
		if(arr[i]<=mn){
			mn=arr[i];
			idxs=i;		//min element index found
		}
	}
	if(idxg>idxs){
		count=idxg+n-2-idxs;
	}else{
		count=idxg+n-1-idxs;
	}
	cout<<count;
	return 0;
}


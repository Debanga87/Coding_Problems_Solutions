#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int max=arr[0],min=arr[0],count=0;
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			count++;
		}else if(arr[i]<min){
			min=arr[i];
			count++;
		}
	}
	cout<<count<<'\n';
	return 0;
}


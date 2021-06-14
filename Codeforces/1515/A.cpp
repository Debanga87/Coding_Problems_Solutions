#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

void print(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

bool isValid(int arr[],int n,int x){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum==x){
			return false;
		}
	}
	return true;
}

void testcases(){
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//rotate given array n number of times, if any arrangement passes the tc, ac
	//else NO
	int t=n;
	while(t--){
		if(isValid(arr,n,x)){
			cout<<"YES\n";
			print(arr,n);
			return;
		}else{
			//rotate clkwise
			int temp=arr[n-1];
			for(int i=n-1;i>0;i--){
				arr[i]=arr[i-1];
			}
			arr[0]=temp;
		}
	}
	cout<<"NO\n";
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	/*
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	*/
	int t;
	cin>>t;
	while(t--){
		testcases();
    }
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(s.find(arr[i])==s.end()){
				s.insert(arr[i]);
			}
		}
		if(s.size()==1){
			cout<<"1\n";
		}else{
			cout<<s.size()-1<<'\n';
		}
	}
	return 0;
}


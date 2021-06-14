#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

void testcases(){
	int n;
	cin>>n;
	int arr[n];
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	int ele;
	auto i=mp.begin();
	if(i->second==1){
		ele=i->first;
	}else{
		i++;
		ele=i->first;
	}
	int ind;
	for(int i=0;i<n;i++){
		if(arr[i]==ele){
			ind=i;
			break;
		}
	}
	cout<<ind+1<<'\n';
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		testcases();
    }
	return 0;
}


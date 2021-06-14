#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

void testcases(){
	int n;
	string s;
	cin>>n>>s;
	int k=0;		
	for(int i=0;i<n;i++){
		if(s[i]=='*'){
			k++;			//sheep count
		}
	}
	int mid=k/2,pos=-1,cnt=-1;
	for(int i=0;i<n;i++){
		if(s[i]=='*'){
			cnt++;
			if(cnt==mid){
				pos=i;
				break;
			}
		}
	}
	cnt=0;
	int i=pos+1,j=pos-1;
	long long ans=0;
	while(i<n){
		if(s[i]=='.'){
			cnt++;
		}else{
			ans+=cnt;
		}
		i++;
	}
	cnt=0;
	while(j>=0){
		if(s[j]=='.'){
			cnt++;
		}else{
			ans+=cnt;
		}
		j--;
	}
	cout<<ans<<'\n';
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


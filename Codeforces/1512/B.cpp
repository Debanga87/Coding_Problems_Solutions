#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

void testcases(){
	int n;
	cin>>n;
	int x1,y1,x2,y2;
	bool flag=false;
	char mat[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
			if(mat[i][j]=='*' && !flag){
				x1=i,y1=j;
				flag=true;
			}
			if(mat[i][j]=='*' && flag){
				x2=i,y2=j;
			}
		}
	}
	if(x1==x2){
		if(x1<n-1){
			mat[x1+1][y1]='*';
			mat[x1+1][y2]='*';
		}else{
			mat[x1-1][y1]='*';
			mat[x1-1][y2]='*';
		}	
	}else if(y1==y2){
		if(y1<n-1){
			mat[x1][y1+1]='*';
			mat[x2][y1+1]='*';
		}else{
			mat[x1][y1-1]='*';
			mat[x2][y1-1]='*';
		}
	}else{
		mat[x1][y2]='*';
		mat[x2][y1]='*';
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<mat[i][j];
		}
		cout<<'\n';
	}
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


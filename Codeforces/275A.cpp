#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int mat[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>mat[i][j];
		}
	}
	bool ans[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			ans[i][j]=1;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(mat[i][j]%2){
				//odd
				ans[i][j]=!ans[i][j];
				if(i+1<3)ans[i+1][j]=!ans[i+1][j];
				if(i-1>=0)ans[i-1][j]=!ans[i-1][j];
				if(j+1<3)ans[i][j+1]=!ans[i][j+1];
				if(j-1>=0)ans[i][j-1]=!ans[i][j-1];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<ans[i][j];
		}
		cout<<endl;
	}

	return 0;
}


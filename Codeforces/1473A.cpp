#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        	cin>>v[i];
        sort(v.begin(),v.end());
        cout<<((v.back()<=d || v[0]+v[1]<=d)?"YES":"NO")<<'\n';
    }
    return 0;
}

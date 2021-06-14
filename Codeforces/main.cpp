#include<bits/stdc++.h>
using namespace std;
int main(){
    bool t[5][5];
    int x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>t[i][j];
            if(t[i][j]){
                x=i;
                y=j;
            }
        }
    }
    int ans=abs(2-x)+abs(2-y);
    cout<<ans<<endl;
    return 0;
}

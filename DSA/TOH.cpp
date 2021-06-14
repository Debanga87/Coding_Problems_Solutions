//Contributed by Debanga Bhuyan, B.Tech NIT Silchar

// Classic Tower of Hanoi Problem solved using recursion

#include <fstream>
#include <iostream>
using namespace std;
void toh(int n, int from, int to, int aux, long long &moves)
{
    if(n==1)
    {   cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    return;}

    toh(n-1,from,aux,to,moves);
    moves++;
    cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
     toh(n-1,aux,to,from,moves);
     moves++;


}

using namespace std;

int main()
 {

    int t;
    cin>>t;
    while(t--)
    {
        long long moves=0;
        int n;
        cin>>n;
        toh(n,1,3,2,moves);
        cout<<moves+1<<endl;
       
    }
	return 0;
	
}


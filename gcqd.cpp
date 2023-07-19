#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const int N=1e5+10;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,q;
	    cin>>n>>q;
	    int a[n];
	    int pforward[N];
	    int pbackward[N];
	    for(int i=1;i<=n;i++)
	    
	    {
	        cin>>a[i];
	        
	    }
	    pforward[0]=pbackward[n+1]=0;
	    int gc=0;
	    for(int i=1;i<=n;i++)
	    {
	       pforward[i]=gcd(pforward[i-1],a[i]);
	    }
	    for(int i=n;i>=1;i--)
	    {
	        pbackward[i]=gcd(pbackward[i+1],a[i]);
	    }
	    while(q--)
	    {
	        int l,r;
	        cin>>l>>r;
	        cout<<gcd(pforward[l-1],pbackward[r+1])<<endl;
	       
	        
	        
	    }
	}
	return 0;
}

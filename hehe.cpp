#include <iostream>
using namespace std;
const int N =1e7+10;
long long pf[N];
long long a[N];
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    int n;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	       pf[i]=pf[i-1]+a[i];
	    }
	 for(int i=1;i<=n;i++)
	 {
	     for(int j=n;j>=1;j++)
	     {
	         if((pf[j]-pf[i])%2==0)
	         {
	             count++;
	         }
	     }
	 }
	 cout<<count<<endl;
	    }
	}
	

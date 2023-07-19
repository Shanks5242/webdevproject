#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int ar[N];
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    while(q--)
    {
        int A,b,k;
        cin>>A>>b>>k;
       ar[A]+=k;
       ar[b+1]-=k;
       for(int i=1;i<=n;i++)
       {
        ar[i]+=ar[i-1];
       }
    }
    int max=0;
    for(int i=1;i<=n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    cout<<max<<endl;
    
}
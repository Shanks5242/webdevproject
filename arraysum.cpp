#include <bits/stdc++.h>
using namespace std;
int sum(int a[],int n)
{
if (n==0)return a[0];
return sum(a,n-1)+a[n];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int d=sum(a,x);
    cout<<d<<endl;
}
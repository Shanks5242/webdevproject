#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=1;
        for(int i=0;n>0;i++)
        {int m;
            cin>>m;
            sum=sum*m;
            n--;
        }
        int d=sum%10;
        if(d==2 || d==3 || d==5)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}



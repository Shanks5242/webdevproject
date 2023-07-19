#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{int count,flag,o,b;
	count=0;
	flag=0;
	o=0;b=0;
	
	    int n;
	    cin>>n;
	    string s[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	        if(s[i]=="A")
	        {
	            count++;
	            
	        }
	        if(s[i]=="AB")
	        {
	            flag++;
	        }
	        if(s[i]=="O")
	        {
	            o++;
	        }
	        if(s[i]=="B")
	        {
	            b++;
	        }
	     }
         int d=0;
         if(count>=b)
         {
d=count;
         }
         else
         {
            d=b;
         }
	    
	         cout<< d + flag + o <<endl;
	   
	}
	return 0;
}

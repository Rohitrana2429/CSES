#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
     ll int x,y;
     cin>>y>>x;
     ll int z;
     z=max(x,y);
     ll int z2=(z-1)*(z-1),ans;
     if(z%2)
     {
     	if(y==z)
     	{
     		ans=z2+x;
     	}
     	else{
     		ans=z2+2*z+2-y;
     	}
     }
     else{
     	if(x==z)
     	{
     		ans=z2+y;
     	}
     	else{
     		ans=z2+2*z-x;
     	}
     }
     cout<<ans<<endl;
	}
}
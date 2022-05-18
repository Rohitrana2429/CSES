#include<bits/stdc++.h>
using namespace std;
#define  ll long long 
int  main()
{
   ll int n;
   cin>>n;
  ll int mx=0;
  ll int ans=0;
   for (int i = 0; i < n; i++)
   {
   	ll  int x;
   	  cin>>x;
   	  mx=max(x,mx);
   	  ans+=mx-x;

   }
   cout<<ans<<endl;

}
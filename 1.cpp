#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll int n;
	cin>>n;
	ll int a[n];
	for (int i = 0; i < n-1; i++)
	{
	   cin>>a[i];
	}
    ll int s=n-1;
    ll  int total=0;
     for (int i = 0; i < n-1; i++)
     {
     	total+=a[i];
     }
     ll int sum=((n)*(n+1))/2;
     cout<<sum-total<<endl;
}
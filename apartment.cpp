#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
  ll n , m ,k;
  cin>>n>>m>>k;
  int a[m],b[n];
  for (int i = 0; i < n; i++)
  {
      cin>>a[i];
  }
 for (int j = 0; j < m;j++)
 {
     cin>>b[j];
 }
 sort(a,a+n);
 sort(b,b+m);
 ll count=0;
 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < m; j++)
    {
        if(a[i]==b[j])
        {
            count++;
        }
        else if(a[i]-k==b[j])
        {
            count++;
        }
    }
 }
cout<<count<<"\n";
}
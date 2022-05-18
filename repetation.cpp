#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int count=1,a=1;
   for (int i = 0; i < s.length(); i++)
   {
      if(s[i]==s[i+1])
      {
         count++;
         a=max(count,a);
      }
      else if(s[i]!=s[i+1])
      {
         a=max(count,a);
         count=1;
      }
   } 
   cout<<a<<endl;
}
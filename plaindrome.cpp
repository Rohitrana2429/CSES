#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string s;
	cin>>s;
    int c[26]={ },c1=0;
    for(char d : s)
    {
    	++c[d-'A'];
    }
	 for (int i = 0; i < 26; ++i)
	 {
	    c1+=c[i]&1;
	    if(c1>1)
	    {
	    	cout<<"NO SOLUTION";
	    }

	 }
   string t;
   cout<<t;
   for (int i = 0; i < 26; ++i)
   {
   	if(c[i]&1)
   	for (int i = 0; i < count; ++i)
   	 {
   	 	/* code */
   	 } 
   }

}
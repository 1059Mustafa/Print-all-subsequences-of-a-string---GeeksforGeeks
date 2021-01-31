#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s="ABC";
	int n=s.size();
	int total=1<<n;
	for(int i=0;i<total;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        if(i&(1<<j))
	        {
	            cout<<s[j];
	        }
	    }
	    cout<<endl;
	}
	return 0;
}

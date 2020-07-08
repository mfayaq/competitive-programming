#include<bits/stdc++.h>
using namespace std;

int count_no(int p)
{	int c,count=0;
	if(p<=2048)
	{	while(p!=0)
		{	
			c=p%2;
			p=p/2;
			if(c==1)
			count++;
		}
		return count;
	}
	else
		return p/2048 + count_no(p%2048);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,count=0;
		cin>>p;
		count=count_no(p);
		cout<<count<<"\n";
	}
}

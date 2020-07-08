#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,m1,count=0;
		vector <int> v;
		cin>>n>>m;
		for(int j=0;j<m;j++)
		{
			cin>>m1;2
			v.push_back(m1);
		}

		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			if(v[i]!=v[i-1])
			count++;
		}
		cout<<count<<"\n";
	}
}

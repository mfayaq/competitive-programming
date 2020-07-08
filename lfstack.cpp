#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{	int n,k=0,f,flag=0;
		vector< vector<int> > v;
		vector <int> v1;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			int a;
			cin>>a;	
			k+=a;
			vector<int> row;	
			for(int i=0;i<a;i++)
			{
				int temp;
				cin>>temp;
				row.push_back(temp);
			}
			v.push_back(row);
		}		
		for(int i=0;i<k;i++)
		{
			cin>>f;
			v1.push_back(f);
		}
		
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(v1[i]==v[j].back())
				{	
					v[j].pop_back();
				}
			}
		}
		
		for(int i=0;i<n;i++)
		{
			if(v[i].empty())
			flag++;
		}
		
		if(flag==n)
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
}	

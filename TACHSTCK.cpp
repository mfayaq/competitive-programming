#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n,d,l;
	int count=0;
	bool flag[100000];
	vector <long> v;
	cin>>n>>d;
	for(int i=0;i<n;i++)
	{
		cin>>l;
		v.push_back(l);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-1;i++)
	{
		if(v[i+1]-v[i]<=d)
		{
			count++;
			i++;
		}
	}
	cout<<count<<"\n";
}

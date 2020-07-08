#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k;
	long long temp,sum1,sum2;
	cin>>t;
	while(t--)
	{	sum1=0;sum2=0;
		cin>>n>>k;
		if(k>n/2)
		k=n-k;
		vector <long> v;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<k;i++)
		sum2+=v[i];
		for(int i=k;i<n;i++)
		sum1+=v[i];
		cout<<(sum1-sum2)<<"\n";
	}
}

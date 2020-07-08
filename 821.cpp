#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k=0,a[10000];
	cin>>t;
	int prime[8]={2,3,5,7,11,13,17,19};
	while(t--)
	{	long long n;
		int sum=0;
		cin>>n;
		for(int i=2;i<=n;i++)
		{	
			for(int j=0;j<8;j++)
				if(i%prime[j]==0)
				sum++;
		}
		a[k]=sum;
		k++;
	}
	
	while(t<k-1)
	{ 
	t++;
	cout<<a[t]<<"\n";
	}
}		

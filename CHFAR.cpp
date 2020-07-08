#include<iostream>
using namespace std;

int main()
{
	int t,flag[1000],v=0;
	cin>>t;
	while(t--)
	{
		int n,k,a[10000],sum1,sum2,j=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<k&j<n;j++)
		{	if(a[j]!=1)
			{
				a[j]=1;
				i++;
			}
		}	
		for(int i=0;i<n;i++)
			sum1+=a[i]*a[i];
		for(int i=0;i<n;i++)
			sum2+=a[i];
		if(sum1<=sum2)
			flag[v]=1;
		else
			flag[v]=0;
		v++;
	}
	t=0;
	while(v--)
	{
		if(flag[t]==1)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";
		t++;
	}
}

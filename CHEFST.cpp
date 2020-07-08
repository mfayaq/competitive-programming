#include<bits/stdc++.h>
using namespace std;
#define MIN(a,b,c) a < b ? (a < c ? a : c) : (b < c ? b : c) ;

int count_stones(int n1, int n2, int m)
{	
	int min;
	if(m==0||n1==0||n2==0)
	return n1+n2;
	else
	{
	min=MIN(n1,n2,m);
	m--;
	return count_stones(n1-min,n2-min,m);
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n1,n2,m,result;
		cin>>n1>>n2>>m;
		result=count_stones(n1,n2,m);
		cout<<result;
	}
}

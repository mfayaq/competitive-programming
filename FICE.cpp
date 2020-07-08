#include<iostream>
#include<cmath>
using namespace std;

long long double recur(int n, long long double *arr)
{	
	if(arr[n]!=0)
	return arr[n];
	else
	{arr[n] = recur(n-1,arr)+recur(n-2,arr);
	return arr[n];}
}

int main()
{
	long long double t, arr[1001]={0};
	arr[1]=2;
	arr[2]=2;
	cin>>t;
	
	while(t--)
	{
		int n; long long double m,result;
		cin>>n>>m;
		result=recur(n,arr);
		cout<<result%m<<"\n";
	}
}

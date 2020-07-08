#include<iostream>
using namespace std;

int main()
{
int t,flag[10],k=0;
cin>>t;
while(t--)
{
int n;
cin>>n;
if (n==2010||n==2015||n==2016||n==2017||n==2019)
flag[k]=1;
k++;
}
t=0;
while(k--)
{
if (flag[t]==1)
	cout<<"HOSTED"<<"\n";	
else
	cout<<"NOT HOSTED"<<"\n";
t++;
}
}

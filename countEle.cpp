#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,nq;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	cin>>nq;
	int q[nq];
	for(int i=0;i<nq;i++)
		cin>>q[i];
	int size = *max_element(a,a+n)+1;
	int hash[size]={0};
	for(int i=0;i<n;i++)
		hash[b[i]]++;
	int prefixSum[size]={0};
	for(int i=0;i<size;i++)
		prefixSum[i+1]=prefixSum[i]+hash[i];
	for(int i=0;i<nq;i++)
		cout<<hash[a[q[i]]]<<endl;
}

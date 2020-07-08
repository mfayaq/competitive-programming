#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll  a,n,k;
	cin>>a>>n>>k;
	while(a>0&&k>0){
		cout<<a%(n+1)<<" ";
		a=a/(n+1);
		k--;
	}
	while(k>0){
		cout<<"0";
		k--;
	}
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum;
	cin>>n>>sum;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int left=0,right=n-1;
	while(left<right){
		
		

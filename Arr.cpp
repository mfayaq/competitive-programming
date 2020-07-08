#include <bits/stdc++.h>
using namespace std;

int main(){

	int size;float target;
	cin>>size>>target;
	int arr[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	sort(arr,arr+size);
	int left = 0, right = size-1;
	float min = 10000000;
	while(left<right){
		if(abs(arr[right]+arr[left]-target)<=min){
			min=abs(arr[right]+arr[left]-target);
			cout<<min<<" "<<left<<" "<<right<<endl;
			right--;
		}
		else{
			left++;
		}
	}
}	

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,k;
    cin>>n>>k;
    ll arr[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    priority_queue<int> pq (arr,arr+n);
    
    while(k>0){
        ll top = pq.top();
        pq.pop();
        pq.push(top/2);
        sum+=top;
        k--;
    }
    cout<<sum;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    // ll temp=k;
    m=m-n;
    vector<int> arr(n,1);
    for(ll i=0;m>0;i++){
        for(ll j=(k-i-1);j<(k+i);j++){
            if(j<0||j>n)
                continue;
            arr[j]++;
            m--;
        }
    }
    cout<<arr[k];
}

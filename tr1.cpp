#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll arr[n],d=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        if((arr[i+1]-arr[i])*a<b)
            d+=(arr[i+1]-arr[i])*a;
        else
            d+=b;
    }
    cout<<d;
}

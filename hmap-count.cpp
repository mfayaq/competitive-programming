#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,w;
    cin>>n>>w;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    map<int,int> m;
    int left=0,right=n;
    for(int i=0;i<w;i++)
        m[arr[i]]++;
    cout<<m.size()<<" ";
    while(left+w<right){
        m[arr[left]--];
        if(m[arr[left]]==0){
            m.erase(arr[left]);
        }
        m[arr[left+w]++];
        left++;
        cout<<m.size()<<" ";
    }
}

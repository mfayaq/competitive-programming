#include<bits/stdc++.h>
using namespace std;

bool f(pair<int,int>x,pair<int,int>y){
    return x.first<y.first;
}

int main(){
    int n,m,x;
    cin>>n>>m>>x;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    map< int,vector< pair<int,int> > > m1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            m1[a[i]+b[j]].push_back(make_pair(a[i],b[j]));
        }
    }
    
    if(m1.count(x)==0){
        cout<<"-1";
    }
    else{
        sort(m1[x].begin(),m1[x].end(),f);
        for(auto ele:m1[x]){
            cout<<ele.first<<","<<ele.second<<" ";
        }
    }
}

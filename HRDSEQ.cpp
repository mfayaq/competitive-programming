#include<iostream>
#include<vector>
#include<map>
using namespace std;


vector<int> v(130,-1);

int hardSeq(int n){
    map<int,int> m;
    // if(v[n]==-1)
    for(int i=1;i<=n;i++){
        if(m.count(v[i-1])==1){
            v[i]=(i-1)-m[v[i-1]];
            m[v[i-1]]=i-1;
        }
        else{
            m[v[i-1]]=i-1;
            v[i]=0;
        }
    }
    return v[n-1];
}

int count(int n){
    map<int,int> m1;
    for(int i=1;i<=n;i++){
        m1[v[i]]++;
    }
    return m1[v[n]];
}

int main(){
    int t,n;
    cin>>t;
    hardSeq(128);
    while (t--)
    {
        cin>>n;
        cout<<count(n)<<"\n";
    }
    
}
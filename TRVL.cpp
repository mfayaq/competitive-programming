#include<bits/stdc++.h>
using namespace std;

vector<int> DividingArray (map<int,int> &m,int N) {
    vector<int> result;
    int n= N/2-m.size();
    if(n>0){
        result.push_back(n);
        for(auto it=m.begin();it!=m.end();it++){
        result.push_back(it->first);
        m[it->first]--;
        }
        int i=0;
        for(auto it=m.end();it!=m.begin();it--){
        result.push_back(it->first+i);
        m[it->first]--;
        i++;
        }
    }
    else{
        result.push_back(0);
        for(auto it=m.begin();it!=m.end();it++){
        result.push_back(it->first);
        m[it->first]--;
        }
    }
    for(auto it=m.begin();it!=m.end();it++){
        while((it->second)!=0){
            result.push_back(it->first);
            m[it->first]--;
        }
    }
    return result;
}


int main()
{   ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    map<int,int> m;
    int a;
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> a;
    	m[a]++;
    }
    vector <int> out_;
    out_ = DividingArray(m,N);
    cout << out_[0]<<endl;
    for(int i_A=1; i_A<out_.size(); i_A++)
    	cout<<out_[i_A]<<" ";
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    string o,f;
    cin>>o>>f;
    int k=2;
    string temp;
    for(int i=0;i<2;i++){
      temp.push_back(f[f.size()-2+i]);
    }
    for(int i=0;i<f.size()-2;i++){
     temp.push_back(f[i]);
    }
    if(o.compare(temp)==0)
    cout<<"Yes"<<"\n";
    else
    cout<<temp<<"No"<<"\n";
  }
  return 0;
}
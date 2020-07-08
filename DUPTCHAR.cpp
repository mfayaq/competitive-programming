#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    string s1,s2;
    int count1=0,count2=0;
    cin>>s1>>s2;
    for(auto it=s1.begin();it!=s1.end();it++){
      if(*it=='-')
        count1++;
    }
    for(auto it=s2.begin();it!=s2.end();it++){
      if(*it=='-')
        count2++;
    }
    if(count1%2==count2%2)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
  }
  return 0;
}

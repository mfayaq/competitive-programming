#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    long n,a,b,k,total;
    cin>>n>>a>>b>>k;
    total=(long)(n/a)+(long)(n/b);
    if (__gcd(a,b)==1) {
      total-=(long)2*(n/(a*b));
    }
    else if(b>a){
      total-=(long)2*(n/b);
    }
    else{
      total-=(long)2*(n/a);
    }
    if (total>=k) {
      cout<<"Win"<<endl;
    }
    else{
      cout<<"Lose"<<endl;
    }
  }
  return 0;
}

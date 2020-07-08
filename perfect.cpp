#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t,n;
  cin>>t;
  while(t--){
    int sum=1;
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
      if(n%i==0)
      sum=sum+i+(n/i);
    }
    if(sum==n)
    cout<<"true";
    else
    cout<<"false";
  }
  return 0;
}

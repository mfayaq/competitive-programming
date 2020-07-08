#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t,n,flag;
  cin>>t;
  while(t--){
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++){
      flag=0;
      for(int j=0;j<sqrt(a[i]);j++){
        if(a[i]%j==0)
        flag=1;
        }
      if(flag)
      cout<<a[i]<<" ";
    }
  }

  return 0;
}

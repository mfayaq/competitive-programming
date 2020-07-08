#include <bits/stdc++.h>
using namespace std;

int main()
{ int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int rem=n%10;
    switch(rem){
      case 0 : cout<<"0";
                break;
      case 5 : cout<<"1";
                break;
      default: cout<<"-1";
    }
    }
    return 0;
  }

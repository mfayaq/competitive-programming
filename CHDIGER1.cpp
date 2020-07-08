#include <bits/stdc++.h>

int main() {
  int t,d;
  long long n;
  std::cin >> t;
  std::vector<int> v1,v2;
  while(t--){
  int a,b,count=0;
  v1.clear();
  v2.clear();
  std::cin >> n >> d;
  while (n!=0) {
    v1.push_back(n%10);
    n=n/10;
  }
  do {
    a=v1.back();
    v1.pop_back();
    b=v1.back();
    count++;
  } while(a>=b&&b!=v1.front());
  if(a<v1.back()){
  v1.push_back(a);
  count--;
  }
  while(!v1.empty()){
    if(v1.back()<d)
    v2.push_back(v1.back());
    else
    count++;
    v1.pop_back();
  }
  while(count--){
  v2.push_back(d);
  }
  n=0;
  for(auto it=v2.begin();it!=v2.end();it++)
  n=n*10+(*it);
  std::cout<<n<<"\n";
  }
}

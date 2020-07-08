#include <bits/stdc++.h>

int main() {
  int t,temp;
  long n,sum;
  std::string str;
  char x;
  std::cin >> t;
  while (t--) {
    sum=0,temp=-1;
    std::cin >> n >> str >> x;
    str+=x;
    size_t found = str.find(x);
    while (found!=std::string::npos) {
    sum+=(((found-temp-1)*(found-temp))/2);
    temp=found;
    found= str.find(x,found+1);
    }
    std::cout << ((n*(n+1))/2 - sum) << '\n';
    }
  return 0;
}

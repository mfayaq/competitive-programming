#include <bits/stdc++.h>

int main() {
  int b,k,num=0;
  std::cin >> b >> k;
  int a[k];
  for (int i = 0; i < k; i++) {
    std::cin >> a[i];
  }
  for (int i = 0; i < k; i++) {
    num+=a[i]*pow(b,k-i-1);
  }
  if (num%2==0) {
    std::cout << "even" << '\n';
  }
  else{
    std::cout << "odd" << '\n';
  }
  return 0;
}

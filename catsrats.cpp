#include<bits/stdc++.h>
int main() {
  int n,q;
  std::cin >> n >>q;
  int f[n],k[q];
  for (int i = 0; i < n; i++) {
    std::cin >> f[i];
  }
  for (int i = 0; i < q; i++) {
    std::cin >> k[i];
  }
  int f1[4*n-4];
  for (int i = 0; i < 2*n-2; i++) {
    f1[i]=f[i];
  }
  return 0;
}

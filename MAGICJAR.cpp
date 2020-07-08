#include <bits/stdc++.h>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    long a[n],max=0;
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      if (a[i]>max) {
        max=a[i];
      }
    }
    std::cout << max << '\n';
  }
  return 0;
}

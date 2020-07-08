#include <bits/stdc++.h>

long long C(int n, int r) {
    if(r > n - r) r = n - r;
    long long ncr = 1;
    int i;
    for(i = 1; i <= r; i++) {
        ncr *= n - r + i;
        ncr /= i;
    }
    return ncr;
}

int main() {
  unsigned int t,n,k,a;
  std::cin >> t;
  while (t--) {
    std::map<int, int> map;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
      std::cin >> a;
      map[a]++;
    }
    auto it=map.begin();
    for (it = map.begin(); k > (it->second); it++) {
      k-=it->second;
    }
    std::cout << C(it->second,k) << '\n';
  }
  return 0;
}

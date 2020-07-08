#include <bits/stdc++.h>

int main() {
  int t,d;
  long long n;
  std::cin >> t;
  std::deque<int> dq;
  while (t--) {
    dq.clear();
    std::cin >> n >> d;
    while (n!=0) {
      dq.push_front(n%10);
      n=n/10;
    }
    int i = dq.size();
    for (auto it = dq.begin(); i>0 ; it++) {
      if (*it>=d) {
        *it=0;
        dq.push_back(d);
      }
      i--;
    }
    for (auto it = dq.begin(); it != dq.end() ; it++) {
      if (*it!=0) {
        std::cout << *it;
      }
    }
    std::cout << '\n';
  }
  return 0;
}

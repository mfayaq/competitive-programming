#include <bits/stdc++.h>

int main() {
  int t,n,k,v,sum;
  std::cin >> t;
  while (t--) {
    sum=0;
    std::cin >> n >> k >> v;
    int arr[n];
    for (int i = 0; i < n; i++) {
      std::cin>> arr[i];
      sum+=arr[i];
    }
    int totalOfAll= (n+k)*v;
    if (totalOfAll-sum>0) {
      if ((totalOfAll-sum)%k==0) {
        std::cout << (totalOfAll-sum)/k << '\n';
      }
      else
      std::cout << "-1" << '\n';
    }
    else
    std::cout << "-1" << '\n';
  }
}

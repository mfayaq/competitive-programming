#include <bits/stdc++.h>

int arr[4]={2,3,0,9};

int main() {
  int t;unsigned long long n;
  std::cin >> t;
  while (t--) {
    int m=0;
    std::cin >> n;
    while (n!=0) {
      m++;
      n=n>>1;
    }
    m--;
    if (m==0) {
      std::cout << "0" << '\n';
    } else if (m==1) {
      std::cout << "1" << '\n';
    } else {
      std::cout << arr[(m-2)%4] << '\n';
    }
  }
  return 0;
}

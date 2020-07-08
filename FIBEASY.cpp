#include <bits/stdc++.h>

int fib(int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}

int main() {
  int t; unsigned long long n;
  std::cin >> t;
  while (t--) {
    int m=0,pos; unsigned long long fn;
    std::cin >> n;
    /*while (n!=0) {
      m++;
      n=n>>1;
    }
    m--;
    pos=pow(2,m)-1;*/
    fn=fib(n);
    fn=fn;
    std::cout << fn << '\n';
  }
  return 0;
}

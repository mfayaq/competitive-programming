#include <bits/stdc++.h>
bool f(long a, long b){
  return a>b;
}
int main() {
  int n;
  std::cin >> n;
  long A[n],B[n-1];
  for (int i = 0; i < n; i++) {
    std::cin >> A[i];
  }
  std::sort(A,A+n);
  for (int i = 0; i < n-1; i++) {
    B[i]=A[i]%A[i+1];
  }
  std::sort(B,B+n-1,f);
  std::cout << B[0] << '\n';
  return 0;
}

#include <bits/stdc++.h>

int f;

unsigned long long fib(unsigned long long n){
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f = 1);
    int k = (n & 1)? (n+1)/2 : n/2;
    int fibk=fib(k);
    int fibk1=fib(k-1);
    f = (n & 1)? (fibk*fibk + fibk1*fibk1)%10
           :(((2*fibk1) + fibk)*fibk)%10;

    return f;
}

int main() {
  int t; unsigned long long n;
  std::cin >> t;
  while (t--) {
    int m=0,pos; unsigned long long fn;
    std::cin >> n;
    while (n!=0) {
      m++;
      n=n>>1;
    }
    m--;
    pos=pow(2,m)-1;
    fn=fib(pos);
    std::cout << fn << '\n';
  }
  return 0;
}

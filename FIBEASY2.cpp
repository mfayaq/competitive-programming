
#include <bits/stdc++.h>

void multiply(int F[2][2], int M[2][2])
{
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

  F[0][0] = x%10;
  F[0][1] = y%10;
  F[1][0] = z%10;
  F[1][1] = w%10;
}

void power(int F[2][2], unsigned long long n)
{
  if( n == 0 || n == 1)
      return;
  int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}

int fib(unsigned long long n)
{
  int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}

int main() {
  int t; unsigned long long n;
  std::cin >> t;
  while (t--) {
    int fn,m=0; unsigned long long pos;
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

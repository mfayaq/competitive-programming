  #include <bits/stdc++.h>

  int main() {
    int a,b,c,result,t;
    std::cin >> t;
    while (t--) {
      result=0;
      std::cin >> a >> b>> c;
      result=a+2*b+3*c;
      if (result%2==1) {
        std::cout << "NO" << '\n';
      }
      else
      std::cout << "YES" << '\n';
    }
    return 0;
  }

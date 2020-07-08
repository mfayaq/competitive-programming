#include <bits/stdc++.h>

int main() {
  int t;
  std::cin >>t;
  while (t--) {
    int n,count=0;
    bool flag;
    std::cin >> n;
    std::string s[n];
    for(int i=0;i<n;i++) {
      std::cin>>s[i];
    }
    for(int j = 97;j <= 122; j++){
      flag=true;
        for (int i = 0; i < n; i++) {
          if(s[i].find((char)j) != std::string::npos);
          else{
            flag=false;
            break;
          }
        }
        if(flag)
        count++;
    }
    std::cout << count << '\n';
  }
  return 0;
}

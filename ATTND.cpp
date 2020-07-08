#include <bits/stdc++.h>

int main() {
  int t,n;
  std::cin >> t >> n;
  std::string s[n];
  int flag[n]={0};
  for (int i = 0; i < n; i++) {
    std::cin >> s[i];
  }
  for (int i = 0; i < n; i++) {
    std::string temp;
    int pos = s[i].find(" ");
    temp = s.substr(pos+1);
  }
  return 0;
}{}

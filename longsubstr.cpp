#include <bits/stdc++.h>

bool longeststr(std::string s, int left, int right){
  for (int i = left; i < right; i++) {
    for (int j = left+1; j < right; j++) {
      if (s[i]==s[j]) {

      }
    }
  }
}

int main() {
  std::string s;
  std::cin >> s ;
  int left,right,max=0,length=s.size();
      for(int i=0;i<length;i++){
          for(left=i;left<length;left++){
              for(right=left+1;right<length;right++){
                  if(longeststr(s,left,right))
                      break;
              }
              if((right-left)>max)
                  max=right-left;
          }
      }
      std::cout << max << '\n';
  return 0;
}

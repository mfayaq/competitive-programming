#include <bits/stdc++.h>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n,b,max=0;
    std::cin >> n >> b;
    int arr[3][n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 3; j++) {
        std::cin >> arr[j][i];
      }
    }
    for (int i = 0; i < n; i++) {
      if (arr[2][i]<=b) {
        if (arr[0][i]*arr[1][i]>max) {
          max=arr[0][i]*arr[1][i];
        }
      }
    }
    if(max==0){
      std::cout << "no tablet" << '\n';
    }
    else{
      std::cout << max << '\n';
    }
  }
  return 0;
}

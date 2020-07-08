#include <bits/stdc++.h>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n,count=0;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      std::cin >> arr[i];
    }
    std::sort(arr,arr+n);
    for (int i = 0; i < n; i++) {
      /*if(arr[i]==0){
        count++;
      }*/
      if (count>=arr[i]){
        count++;
      }
    }
    std::cout << count << '\n';
  }
  return 0;
}

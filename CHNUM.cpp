#include<bits/stdc++.h>

int main() {
  int t,n,a;
  std::cin >> t;
  while (t--) {
    std::cin >> n;
    std::vector<int> v;
    for (int i = 0; i < n; i++) {
      std::cin >> a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    std::vector<int>::iterator low=std::lower_bound (v.begin(), v.end(), 0);
    if (low-v.begin()>v.end()-low) {
      if (v.end()-low==0) {
        std::cout << low-v.begin() << " " << low-v.begin() << '\n';
      }
      else{
        std::cout << low-v.begin() << " " << v.end()-low << '\n';
      }
    }
    else{
      if (low-v.begin()==0) {
        std::cout << v.end()-low << " " << v.end()-low << '\n';
      }
    else{
      std::cout << v.end()-low << " " << low-v.begin() << '\n';
    }
  }
}
  return 0;
}

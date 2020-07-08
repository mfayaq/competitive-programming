#include <bits/stdc++.h>

int main() {
  unsigned int t,n,k,a,minsum,sum;
  std::cin >> t;
  while (t--) {
    minsum=0;
    std::vector <int> v,v1;
    std::cin >> n >>k;
    for (unsigned int i = 0; i < n; i++) {
      std::cin >> a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    auto it = v.begin();
    for (unsigned int i=0; i < k; i++) {
      minsum+=*it;
      it++;
    }
    long long count=0;
    int opsize=pow(2,v.size());
    for(int i=1;i<opsize;i++){
      sum=0;
      v1.clear();
        for (unsigned int j = 0; j < v.size(); j++) {
          if (i & 1<<j) {
            v1.push_back(v[j]);
          }
        }
        if (v1.size()==k) {
          for (auto it=v1.begin();it!=v1.end();it++) {
            sum+=*it;
          }
        }
        if (sum==minsum) {
          count++;
        }
    }
    std::cout << count << '\n';
  }
  return 0;
}

#include <bits/stdc++.h>

/*bool f(std::pair<int,int> x,std::pair<int,int> y){
  return (x.second>y.second);
}*/

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n,max=0;
    bool flag=true;
    std::cin >> n;
    int attack[n],defense[n];
    std::pair<int,int> atdf[n];
    for (int i = 0; i < n; i++) {
      std::cin >> attack[i];
    }
    for (int i = 0; i < n; i++) {
      std::cin >> defense[i];
    }
    for (int i = 0; i < n; i++) {
      atdf[i]= std::make_pair(attack[i],defense[i]);
    }
    //sort(atdf,atdf+n,f);
    for (int i = 0; i < n; i++) {
        if (atdf[i].second>(atdf[(i+n-1)%n].first+atdf[(i+1)%n].first)) {
        flag=false;
        if (atdf[i].second>max) {
          max=atdf[i].second;
        }
      }
    }
    if (flag) {
      std::cout << "-1" << '\n';
    }
    else{
      std::cout << max << '\n';
    }
  }
  return 0;
}

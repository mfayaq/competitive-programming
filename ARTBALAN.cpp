#include <bits/stdc++.h>
typedef std::pair<char,int> pair;

bool f(const pair& l, const pair& r) { return l.second < r.second;}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    std::string str;
    std::map<char, int> map;
    std::vector<pair> v;
    std::cin >> str;
    int i,avg,opr=0,sum=0;
    for (std::string::iterator it = str.begin(); it < str.end(); it++) {
      map[*it]++;
    }
    for (std::map<char,int>:: iterator it = map.begin(); it != map.end(); it++) {
      sum+=it->second;
    }
    for (i = map.size(); i > 0; i--) {
      if (sum%i==0) {
        avg=sum/i;
        break;
      }
    }
    copy(map.begin(), map.end(), std::back_inserter<std::vector<pair> >(v));
    sort(v.begin(),v.end(),f);
  for (std::vector<pair>::iterator it = v.begin(); it->second < avg; it++) {
    opr+=avg-(it->second);
  }
  std::cout << opr << '\n';
  }
  return 0;
}

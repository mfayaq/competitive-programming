#include <bits/stdc++.h>
typedef std::pair<std::string,int> pair;
bool f( pair l,  pair r) { if (l.second==r.second) { return l.first.length() > r.first.length(); } else{return l.second > r.second;}}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL); std::cout.tie(NULL);
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::string str;
    std::map<std::string, int> map;
    std::vector<pair> v;
    std::cin>>str;
    for (int i = 0; i < n; i++) {
      std::string temp = str.substr(0,i+1);
      size_t nPos = str.find(temp, 0); // first occurrence
      while(nPos != std::string::npos)
      {
        map[temp]++;
        nPos = str.find(temp, nPos + temp.size());
      }
    }

    copy(map.begin(), map.end(), std::back_inserter<std::vector<pair> >(v));
    sort(v.begin(),v.end(),f);
    for(std::vector<pair>::iterator it=v.begin();it!=v.end();it++) {
		std::cout << '{' << it->first << ": " << it->second
				<< '}' << '\n';
	}
    std::cout << v.begin()->first << '\n';
    }
  return 0;
}

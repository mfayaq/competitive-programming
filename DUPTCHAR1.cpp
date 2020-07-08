#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  string s;
  cin >> t;
  while (t--) {
    int ch[26]={0};
    int flag=1;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
      ch[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i++) {
      if (ch[i]>1) {
        flag=0;
        cout << (char)('a'+i) << "=" << ch[i] << " ";
      }
    }
    if (flag)
    cout << "-1";
    cout << "\n";
  }
  return 0;
}

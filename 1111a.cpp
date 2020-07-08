#include <bits/stdc++.h>
using namespace std;

int main() {
  string str, str1;
  cin >> str >>str1;
  if (str1.size()==str.size()) {
    for(string::iterator it = str.begin();it!=str.end();it++){
      if (*it=='a'||*it=='e'||*it=='i'||*it=='o'||*it=='u') {
        *it='1';
      }
      else{
        *it='0';
      }
    }
    for(string::iterator it1 = str1.begin();it1!=str1.end();it1++){
      if (*it1=='a'||*it1=='e'||*it1=='i'||*it1=='o'||*it1=='u') {
        *it1='1';
      }
      else{
        *it1='0';
      }
    }
    if (!str.compare(str1)) {
      cout<<"Yes";
    }
    else
    cout<<"No";
  }
  else
  cout<<"No";
  return 0;
}

#include <bits/stdc++.h>

char *removeDuplicate(char str[], int n)
{
    set<char>s (str, str+n-1);
    int i = 0;
    for (auto x : s)
       str[i++] = x;
    str[i] = '\0';
    return str;
}

int main() {
  int t,flag,count;
  long n;
  std::string str;
  char vowels[5] = {'a','e','i','o','u'};
  std::cin >> t;
  while (t--) {
    count=0;
    std::cin >> n;
    std::string str_arr[n];
    std::map<std::string, int> map;
    for (int i = 0; i < n; i++) {
      std::cin >> str_arr[i];
    }
    for (int i = 0; i < n; i++) {
       removeDuplicate(str_arr[i],str.size());
    }
    for (int i = 0; i < n; i++) {
      map[str_arr[i]]++;
    }

    for (std::map<std::string,int>::iterator it = v.begin(); it != v.end(); it++){

    }

    for (std::vector<std::string>::iterator it = v.begin(); it != v.end(); it++){
      flag=0;
      for (int j = 0; j < 5; j++) {
        if (it->find(vowels[j]))
        flag++;
      }
      if (flag==5) {
        count++;
      }
    }
    std::cout << count << '\n';
  }
  return 0;
}

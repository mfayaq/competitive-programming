#include <bits/stdc++.h>

int main() {
  int t,flag,count;
  long n;
  char vowels[5] = {'a','e','i','o','u'};
  std::cin >> t;
  while (t--) {
    count=0;
    std::cin >> n;
    std::string str_arr[n],str_arr1[(n*(n-1))/2];
    for (int i = 0; i < n; i++) {
      std::cin >> str_arr[i];
    }
    int k=0;
    for (int i = 0; i < n; i++) {
      for (int j = i+1; j < n; j++) {
        str_arr1[k]=str_arr[i%n]+str_arr[j%n];
        k++;
    }
  }
    for (int i = 0; i < (n*(n-1))/2; i++) {
      flag=0;
      for (int j = 0; j < 5; j++) {
        if (str_arr1[i].find(vowels[j]) != std::string::npos)
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

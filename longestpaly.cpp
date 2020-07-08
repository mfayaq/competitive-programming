#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int size= s.length();
    for(int i=0;i<size/2;i++){
        if(s[i]!=s[size-i-1])
            return false;
    }
    return true;
}

string longestPalindrome(string s) {
    string longestPalYet;
    int maxStrLen=0;
    for(int i=0;i<s.length();i++){
        for(int j=maxStrLen;j<=s.length()-i;j++){
            if(isPalindrome(s.substr(i,j)))
               if((j)>maxStrLen){
                   longestPalYet=s.substr(i,j);
                   maxStrLen=j;
               }
        }
    }
    return longestPalYet;
}

int main() {
  string str;
  cin >> str;
  cout <<  longestPalindrome(str);
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector <string> v;

    bool isPalindrome(string s){
        int size=s.length();
        if(size==1){
            v.push_back(s);
            return true;
        }
        else if ((size==2)&&(s[0]==s[size-1])) {
          v.push_back(s);
          return true;
      }

          else if(s[0]==s[size-1]){
            string temp = s.substr(1,size-2);
            auto it = find (v.begin(), v.end(), temp);
            if(it!=v.end()){
                v.push_back(s);
                return true;
            }
            else
            return isPalindrome(temp);
        }
        else
            return false;
    }

    string longestPalindrome(string s) {
        string longestPalYet;
        int maxStrLen=0;
        for(int i=0;i<s.length();i++){
            for(int j=maxStrLen+1;j<=s.length()-i;j++){
                if(isPalindrome(s.substr(i,j)))
                   if(j>maxStrLen){
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

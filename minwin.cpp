#include <bits/stdc++.h>
using namespace std;

    string minWindow(string s, string t) {
        map<char,int> m;
        int counter=0,size=s.length();
        string result="";
        for(auto ch:t)
            m[ch]++;
        for(auto it:m)
            counter+=it.second;
        int init_count=counter;
        int left=0,right=left;  
        while(left<size-init_count){
            if(right==size) {
                left++;
            }
            else if(counter<=0) {
                if(result==""||right-left<result.size())
                result=s.substr(left,right-left);
                if(m.count(s[left])==1){
                    m[s[left]]++;
                    counter++;}
                left++;
            }
            else {
                if(m.count(s[right])==1) {
                    m[s[right]]--;
                    counter--;
                }
                right++;
            }
        }
        return result;
    }

    int main(){
        string s,t;
        cin>>s>>t;
        string result = minWindow(s,t);
        cout<<result;
    }
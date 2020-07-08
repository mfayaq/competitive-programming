#include<bits/stdc++.h>
using namespace std;

typedef std::pair<int,vector<deque<int>>::iterator> myPair_type;

struct mypair_comp{
  bool operator()(myPair_type const& lhs, myPair_type const& rhs){
    return lhs.first < rhs.first;
  }
};

int main(){
    int t,n,c;
    cin>>t;
    vector<deque<int>> v;
    priority_queue<myPair_type,vector<myPair_type>,mypair_comp> chef;
    priority_queue<myPair_type,vector<myPair_type>,mypair_comp> ramsay;
    while (t--){
        int turn=1,sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>c;
            deque<int> temp;
            for (int i = 0; i < c; i++){
                int input;
                cin>>input;
                temp.push_back(input);
            }
            v.push_back(temp);
        }
        for(auto it= v.begin();it!=v.end();it++){
            chef.push(make_pair(it->front(),it));
            ramsay.push(make_pair(it->back(),it));
        }
        while(!v.empty()){
            if(turn){
                auto maxLoc=chef.top().second;
                sum+=maxLoc->front();
                maxLoc->pop_front();
                chef.pop();
                if(maxLoc->empty()){
                    v.erase(maxLoc);
                }
                else{
                    chef.push(make_pair(maxLoc->front(),maxLoc));
                    
                }
                turn=0;
            }
            else{
                auto maxLoc=ramsay.top().second;
                maxLoc->pop_back();
                ramsay.pop();
                if(maxLoc->empty()){
                    v.erase(maxLoc);
                }
                else{
                    ramsay.push(make_pair(maxLoc->back(),maxLoc));
                }
                turn=1;
            }
        }
        cout<<sum<<"\n";
    }
    
}
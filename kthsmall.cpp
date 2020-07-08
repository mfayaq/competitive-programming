#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
    bool operator <(const Point& a){
        return x+y<a.x+a.y;
    }
    bool operator <=(const Point& a){
	return x+y<a.x+a.y;
    }        
};

int main(){
    int q,k;
    cin>>q>>k;
    priority_queue<Point> pq;
    stack<Point> v;
    while(q--){
        int temp;
        cin>>temp;
        if(temp==1){
            Point t;
            cin>>t.x>>t.y;
            pq.push(t);
        }
        else{
             for(int i=0;i<k-1;i++){
		v.push(pq.top());
		pq.pop();
	     }
	     cout<<(pow(pq.top().x,2)+pow(pq.top().y,2));
	     while(!v.empty()){
		pq.push(v.top());
		v.pop();
	     }
        }
    }
}

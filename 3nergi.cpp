#include<bits/stdc++.h>
using namespace std;

int n,m;
int countDrinks=0;
stack <pair<int,int>> q;
vector<vector<int> > vis( n , vector<int> (m, 0));
vector<vector<char> > arr( n , vector<char> (m, 0));

void findNeighbours(pair<int,int> pos){
    int dX[4]={1,0,-1,0};
    int dY[4]={0,1,0,-1};
    for(int i=0;i<4;i++){
    int nextX = pos.first+dX[i];
    int nextY = pos.second+dY[i];
        if(nextX>n-1||nextX<0)
            continue;
        else if(nextY>m-1||nextY<0)
            continue;
        else if(vis[nextX][nextY]==1)
            continue;
        else if(arr[nextX][nextY]==arr[pos.first][pos.second]){
            q.push(make_pair(nextX,nextY));
            vis[nextX][nextY]=1;
        }
        else{
            countDrinks++;
            q.push(make_pair(nextX,nextY));
            vis[nextX][nextY]=1;
        }
    }
}

int main(){
    cin>>n>>m;
    // char arr[n][m];
    for(int i=0;i<n;i++){
        vector<char> temp;
        vector<int> temp1;
        for(int j=0;j<m;j++){
            char val;
            cin>>val;
            temp.push_back(val);
            temp1.push_back(0);
        }
        arr.push_back(temp);
        vis.push_back(temp1);
    }
            
    q.push(make_pair(0,0));
    while(!q.empty()){
        auto curr = q.top();
        if(curr.first==n-1&&curr.second==m-1)
            break;
        q.pop();
        findNeighbours(curr);
    }
    cout<<countDrinks;
}

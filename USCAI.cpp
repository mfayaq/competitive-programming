#include <iostream>
#include <fstream>
#include <queue>
#include <vector>

int W,H,Z;
std::queue <int> xq;
std::queue <int> yq;
int dy[] = {-1, -1, -1, 0, 1, 0, 1, 1};
int dx[] = {-1, 1, 0, -1, -1, 1, 0, 1};
std::vector<std::vector<int>> visited;
std::vector<std::vector<int>> target;
std::vector<std::vector<int>> map;
int nodes_in_next_layer=0;

void explore_neighbours(int x, int y) {
  int yy,xx;
  for (int i = 0; i < 8; i++) {
    yy=y+dy[i];
    xx=x+dx[i];
    if (xx<0||yy<0)
    continue;
    if (xx>=W||yy>=H)
    continue;
    if (visited[yy][xx])
    continue;
    if ((map[yy][xx]-map[y][x])>=Z)
    continue;
    xq.push(xx);
    yq.push(yy);
    visited[yy][xx]=1;
    nodes_in_next_layer++;
  }
}

int BFS(int X,int Y,int i) {
int nodes_left_in_layer=1,move_count=0;
bool reached_end=false;
xq.push(X);
yq.push(Y);
visited[Y][X]=1;
while (xq.size()>0) {
  int y = yq.front();
  yq.pop();
  int x = xq.front();
  xq.pop();
  if ((x==target[i][0])&&(y==target[i][1])){
    reached_end=true;
    break;
  }
  explore_neighbours(x,y);
  nodes_left_in_layer--;
  if (nodes_left_in_layer) {
    nodes_left_in_layer=nodes_in_next_layer;
    nodes_in_next_layer=0;
    move_count++;
  }
}
if(reached_end)
return move_count;
return -1;
}

int main() {
  std::ifstream inFile;
  inFile.open("input.txt");
  if (!inFile) {
    std::cerr << "Unable to open file" << '\n';
    exit(1);
  }
  std::string algo;
  int X,Y,N,arr[2],map1;
  inFile>>algo;
  inFile>>W>>H;
  inFile>>X>>Y;
  inFile>>Z;
  inFile>>N;
  for ( int i = 0; i < N; i++) {
    inFile>>arr[0]>>arr[1];
    std::vector<int> temp(arr,arr+2);
    target.push_back(temp);
  }
  for ( int i = 0; i < H; i++) {
    std::vector<int> temp,temp1;
    for ( int j = 0; j < W; j++) {
      inFile>>map1;
      temp.push_back(map1);
      temp1.push_back(0);
    }
    map.push_back(temp);
    visited.push_back(temp1);
  }
  int result;
  if (algo=="BFS") {
    for (int i = 0; i < N; i++) {
      result = BFS(X,Y,i);
    }
  }
  std::cout << result << '\n';
  return 0;
}

#include <iostream>
#include <fstream>
#include <queue>
#include <vector>
#include <set>

struct Node{
  int x, y, p;
  std::vector<Node> parent;
  bool const operator==(const Node& ob) const{
    return x == ob.x && y == ob.y;
  }

  bool operator<(const Node& ob) const{
    return x < ob.x || (x == ob.x && y < ob.y);
  }
};

struct comparePriority{
  bool operator()(Node const& n1,Node const& n2){
    return n1.p>n2.p;
  }
};

int W,H,Z;
std::priority_queue <Node, std::vector<Node>, comparePriority> q;
int dy[] = {-1, -1, -1, 0, 1, 0, 1, 1};
int dx[] = {-1, 1, 0, -1, -1, 1, 0, 1};
//std::vector<std::vector<int>> visited;
std::set<Node> visited;
std::vector<std::vector<int>> target;
std::vector<std::vector<int>> map;
//int nodes_in_next_layer=0;

void explore_neighbours(Node curr) {
  int yy,xx;
  for (int i = 0; i < 8; i++) {
    yy=curr.y+dy[i];
    xx=curr.x+dx[i];
    if (xx<0||yy<0)
    continue;
    if (xx>=W||yy>=H)
    continue;
    if (abs(map[yy][xx]-map[curr.y][curr.x])>Z)
    continue;
    Node next = {xx,yy,curr.p,{curr}};
    if (visited.count(next))
    continue;
    if(abs(dy[i])&&abs(dx[i])){
      next.p+=14;
      q.push(next);
    }
    else{
      next.p+=10;
      q.push(next);
    }
    visited.insert(next);
    //nodes_in_next_layer++;
  }
}

void printPath(std::vector<Node> path)
{
	if (path.size() == 0)
		return;
    printPath(path[0].parent);
	std::cout << "(" << path[0].x << ", " << path[0].y << ") ";
}

void BFS(int X,int Y,int i) {
//int nodes_left_in_layer=1,move_count=0;
while(!q.empty()) q.pop();
visited.clear();
bool reached_end=false;
Node src = {X,Y,0};
Node curr;
q.push(src);
visited.insert(src);
while (!q.empty()) {
  curr=q.top();
  q.pop();
  if ((curr.x==target[i][0])&&(curr.y==target[i][1])){
    reached_end=true;
    break;
  }
  explore_neighbours(curr);
  /*nodes_left_in_layer--;
  if (nodes_left_in_layer) {
    nodes_left_in_layer=nodes_in_next_layer;
    nodes_in_next_layer=0;
    move_count++;
  }*/
}
/*if(reached_end)
return move_count;*/
  if (reached_end){
  printPath({curr});
  std::cout << "Cost =" << curr.p << '\n';
  std::cout << '\n';
  }
  else
  std::cout << "FAIL" << '\n';
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
    std::vector<int> temp;
    for ( int j = 0; j < W; j++) {
      inFile>>map1;
      temp.push_back(map1);
      //temp1.push_back(0);
    }
    map.push_back(temp);
    //visited.push_back(temp1);
  }
  //int result;
  if (algo=="BFS") {
    for (int i = 0; i < N; i++) {
      BFS(X,Y,i);
    }
  }
  //std::cout << result << '\n';
  return 0;
}

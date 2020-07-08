#include <iostream>
#include <fstream>
#include <queue>
#include <vector>
#include <set>
#include <deque>
#include <math.h>

struct Node

{
    int x,y,p;
    int gcost,fcost,hcost;
    std::vector<Node>parent;
    bool const operator==(const Node& ob) const{
        return x == ob.x && y == ob.y;
    }

    bool operator<(const Node& ob) const{
        return x < ob.x || (x == ob.x && y < ob.y);
    }
};

struct comparePriority{
    bool operator()(Node const& n1, Node const& n2){
        return n1.fcost>n2.fcost;
    }
};

std::priority_queue <Node,std::vector<Node>,comparePriority> pq1;
std::queue<Node> q1;
int W,H,Z;
std::ofstream outputfile;
int dy[] = {-1, -1, -1, 0, 1, 0, 1, 1};
int dx[] = {-1, 1, 0, -1, -1, 1, 0, 1};

std::set<Node> avisited;

std::vector<std::vector<int>> target;
std::vector<std::vector<int>> map;

/*int calculateHValue(Node c)
{
    int t1=c.x;
    int y1=c.y;
    int t2=target[i][0];
    int y2=target[i][1];
    return( sqrt ( (t1 – t2)^2 +
                  (y1– y2)^2);
}*/

void astarcost(Node curr,int b) {
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

        Node next = {xx,yy,curr.p,0,0,0,{curr}};

        if (avisited.count(next))
        continue;
        if(abs(dy[i])&&abs(dx[i])){
            next.p+=14;
            next.gcost=next.p+abs(map[yy][xx]-map[curr.y][curr.x]);
            }
        else{
            next.p+=10;
            next.gcost=next.p+abs(map[yy][xx]-map[curr.y][curr.x]);
            }
        Node front1=q1.front();
        //if(next==front1){continue;}
        int cost= curr.gcost+next.p+abs(map[yy][xx]-map[curr.y][curr.x]);

        Node top1=pq1.top();
        if(next==top1 && cost<next.gcost)
        {
            pq1.pop();
        }
        if(next==front1 && cost<next.gcost)
        {
            q1.pop();
        }
        else{
            pq1.push(next);
        }
        next.gcost=cost;
        next.hcost=std::max ( abs(next.x - target[b][0]),
            abs(next.y - target[b][1]) );
        next.fcost=next.gcost+next.hcost;

        avisited.insert(next);


        //nodes_in_next_layer++;
    }
}



void aprintPath(std::vector<Node> path)
{
    if (path.size() == 0)
    return;
    aprintPath(path[0].parent);
    std::cout <<path[0].x << "," <<path[0].y << " " ;
    outputfile <<path[0].x << "," <<path[0].y << " " ;

}


void Astar(int X,int Y,int i) {
    int a=i;
    while(!pq1.empty())
    pq1.pop();
    avisited.clear();
    bool reached_end=false;
    Node src={X,Y,0,0,0,0};
    Node curr;
    pq1.push(src);
    avisited.insert(src);
    while(!pq1.empty()){
        curr=pq1.top();
        pq1.pop();
        q1.push(curr);
        if ((curr.x==target[i][0])&&(curr.y==target[i][1]))
        {
            reached_end=true;
            break;
        }
        astarcost(curr,a);
        //q1.push(curr);
    }
    if (reached_end){
        aprintPath({curr});
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

    outputfile.open("output.txt");
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
            //BFS(X,Y,i);
            outputfile<<"\n";
        }
    }
    if (algo=="UCS") {
        for (int i = 0; i < N; i++) {
            //UCS(X,Y,i);
            outputfile<<"\n";
        }
    }
    if (algo=="A*") {
        for (int i = 0; i < N; i++) {
            Astar(X,Y,i);
            outputfile<<"\n";
        }
    }
    //std::cout << result << '\n';
    return 0;
}

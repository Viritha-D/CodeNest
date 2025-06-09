#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(int start,vector<vector<int>>&adjlist,int numvertices){
    vector<bool>visited(numvertices,false);
    queue<int>q;
    q.push(start);
    visited[start]=true;
    cout<<"bfs traversal";
    while(!q.empty()){
       int current=q.front();
       q.pop();
       cout<<current<<" ";
       for(int neighbour:adjlist[current]) {
        if(!visited[neighbour]){
            q.push(neighbour);
            visited[neighbour]=true;
        }
       }
    }
    cout<<endl;
}
int main()
{
    int numvertices=5;
    vector<vector<int>>adjlist(numvertices);
    adjlist[0]={1,2};
    adjlist[1]={0,3};
    adjlist[2]={0,4};
    adjlist[3]={1};
    adjlist[4]={2};
    int startvertex=0;
    BFS(startvertex,adjlist,numvertices);
    return 0;
}

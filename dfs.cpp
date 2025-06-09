#include<iostream>
#include<vector>
using namespace std;
void dfs(int node,vector<vector<int>>&adjlist,vector<bool>visited){
    visited[node]=true;
    cout<<node<<" ";
    for(int neighbour:adjlist[node]){
        if(!visited[neighbour]){
            dfs(neighbour,adjlist,visited);
        }
    }
}
int main(){
    int numvertices=5;
    vector<vector<int>>adjlist(numvertices);
    adjlist[0]={1,2};
    adjlist[1]={0,3};
    adjlist[2]={0,4};
    adjlist[3]={1};
    adjlist[4]={2};
    vector<bool>visited(numvertices,false);
    cout<<"dfs traversal";
    dfs(0,adjlist,visited);
    return 0;
}

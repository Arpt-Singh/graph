#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;


void validPath(vector<int>&visited,vector<vector<int>>&graph,int node){
    queue<int>q;
    q.push(node);
    visited[node] = 1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(int nbr:graph[f]){
            if(!visited[nbr]){
                q.push(nbr);
                visited[nbr] = 1;
            }
        }
    }
}

int main(){

    // example 1
    vector<vector<int>>edgeList1 = {{0,1},{1,2},{2,0}};
    int n1 = 3;
    int source1 = 0;
    int destination1 = 2;

    //example2
    vector<vector<int>>edgeList2 = {{0,1},{0,2},{3,5},{5,4},{4,3}};
    int n2 = 6;
    int source2 = 0;
    int destination2 = 5;
    vector<int>visited(n1);
    vector<vector<int>>graph(n1);
    for(int i = 0;i<edgeList1.size();i++)
    {
        int a = edgeList1[i][0], b = edgeList1[i][1];

        graph[a].push_back(b);
        
        graph[b].push_back(a);

    }
    validPath(visited,graph,source1);
    
    cout<<visited[destination1];
    return 0;
}
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
using namespace std;

void dfs(int node,unordered_map<int,vector<int>>&graph,vector<int>&visited)
{
    visited[node] = 1;

    cout<<node;
    
    for(auto nbr:graph[node])
    {
        if(!visited[nbr])
        {
            dfs(nbr,graph,visited);
            
        }
    }
}
int main(){
    vector<vector<int>>edegList = {{0,1},{1,4},{1,2},{2,3},{2,0},{2,3}};

    int n=4;
    
    unordered_map<int,vector<int>>graph(n);
    
    for(int i=0;i<edegList.size();i++)
    {
        int a = edegList[i][0], b = edegList[i][1];
    
        graph[a].push_back(b);
    
        graph[b].push_back(a);
    }
    
    vector<int>visited(n);

    dfs(0,graph,visited);
    
    return 0;
}
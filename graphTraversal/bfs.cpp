#include<bits/stdc++.h>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;

void print_graph(int node,unordered_map<int,vector<int>>&graph,vector<int>&visited)
{
    queue<int>q;

    visited[node] = 1;

    q.push(node);

    while(!q.empty())
    {
        int f = q.front();

        q.pop();

        cout<<f<<" ";

        for(int nbr:graph[f])
        {
            if(!visited[nbr])
            {
                visited[nbr] = 1;

                q.push(nbr);
            }
        }
    }

}

int main()
{
    vector<vector<int>>edgeList = {{0,1},{0,2},{1,3},{1,4},{2,4}};

     int n=5;

    vector<int>visited(n);

    unordered_map<int,vector<int>>graph(n);

    for(int i=0;i<edgeList.size();i++)
    {
        int a = edgeList[i][0] , b = edgeList[i][1];

        graph[a].push_back(b);

        graph[b].push_back(a);
    }
    
    print_graph(0,graph,visited);

    return 0;
}
#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;

void print_graph(vector<vector<int>>M,int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<"Node: "<<i<<", neighbours: ";

        for(int j=1;j<=n;j++)
        {
            if(M[i][j]==1)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }

}

int main(){
    vector<vector<int>>edgeList = {{1,2},{2,3},{3,4},{4,2},{1,3}};
    int n = 5;
    vector<vector<int>>M(n,vector<int>(n,0));
    for(int i=0;i<edgeList.size();i++){
        int a = edgeList[i][0], b = edgeList[i][1];
        M[a][b] = 1;
        M[b][a] = 1;
    }
    print_graph(M,n-1);
}
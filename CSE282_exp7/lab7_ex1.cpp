#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>graph[7];
    int nodes, edge, u,v;
    cout<<"Enter Number of Nodes: ";
    cin>>nodes;
    cout<<"Enter Number of Edges: ";
    cin>>edge;
    for(int i=0;i<edge; i++){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout<<"Adjacency list of the graph: "<<endl;
    for(int j=1; j<=nodes; j++)
    {
        cout<<j<<"-->";
        for(auto it: graph[j]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}

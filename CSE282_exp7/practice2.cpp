/* Write a C++ program to represent the following graphs using an adjacency
list.(Figure 1) */
/*Graph 1: Nodes 8, Edges 10
0 1
0 3
1 2
3 4
3 7
7 4
7 5
5 4
5 6
4 6

Graph 2: Nodes 9, Edges 10
0 1
0 3
0 8
1 7
2 3
2 5
3 4
4 8
5 6
7 2
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int node, edge, u, v;
        cout<<"Enter Number of Nodes: ";
        cin>>node;
        vector<int>graph[node+1]; // initialize a vector of array
        cout<<"Enter Number of Edges: ";
        cin>>edge;
        cout<<"Edge connections: "<<endl;
        for (int i = 0;i<edge;i++)
            {
            cin>>u>>v; // take input the edges connection
            graph[u].push_back(v);
            graph[v].push_back(u);
            }
        cout<<"Adjacency List of the Graph: "<<endl;
        for (int i = 0; i<node; i++)
        {
        cout<<i<<" --> ";
        for(auto it: graph[i])
        {
        cout<<it<<" ";
        }
        cout<<endl;
        }
    }

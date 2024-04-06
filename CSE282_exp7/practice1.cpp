/* Write a C++ program to represent the following graphs using an adjacency
matrix (Figure 1) */
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
    int graphNum;
    cout<<"Number of the graph: ";
    cin>>graphNum;
    for(int i=1; i<=graphNum; i++)
    {
        cout<<"For graph no. "<<graphNum<<","<<endl;
        int u,v,node,edge;
        cout<<"Enter the no. of nodes: ";
        cin>>node;
        cout<<"Enter the number of edges: ";
        cin>>edge;
        int adjMat[node][node];
        for(int i=0;i<node;i++)
        {
            for(int j=0;j<node;j++)
            {
                adjMat[i][j] = 0;
            }
        }
        cout<<"Edge connections: "<<endl;
        for(int i=0;i<edge;i++)
        {
            cin>>u>>v;
            adjMat[u][v]=1;
            adjMat[v][u]=1;
        }
        cout<<"Adjacency matrix,"<<endl;
        for(int i=0; i<node; i++)
        {
            for(int j=0; j<node; j++)
            {
                cout<<adjMat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

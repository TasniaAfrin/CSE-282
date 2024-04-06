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
*/#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100];
int visited[100];

vector<int> BFS(int source) {
  vector<int> bfs;
  queue<int> temp;

  visited[source] = 1;
  temp.push(source);

  while (!temp.empty()) {
    int node = temp.front();
    temp.pop();
    bfs.push_back(node);

for (auto it : adj[node]) {
      int nxt_node = it;

      if (visited[nxt_node]) continue;

      visited[nxt_node] = 1;
      temp.push(nxt_node);
    }
  }
  return bfs;
}

int main()
 {
    int u, v, node, edge, graphs;

        cout << "Number of nodes: ";
        cin >> node;
        cout << "Number of edges: ";
        cin >> edge;

        cout << "Give the edge connections:\n";
        for (int i = 0; i < edge; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int source;
        cout << "Give source node: ";
        cin >> source;

        vector<int> bfs;
        bfs = BFS(source);

        for (auto it : bfs) {
            cout << it << " ";
        }
        cout << endl;
 }

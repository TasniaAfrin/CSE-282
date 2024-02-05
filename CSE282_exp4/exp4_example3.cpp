#include<bits/stdc++.h>
using namespace std;
int main ()
{
    queue <int> q; // creates an empty queue of integer q
    q.push(2); // pushes 2 in the queue , now front = back = 2
    q.push(3); // pushes 3 in the queue , now front = 2 , and back = 3
    q.push(8);
    q.push(45);
    q.push(60);
    q.push(80);
while(!q.empty())
    {
      cout<<q.front()<<" ";
      q.pop();
    }
}

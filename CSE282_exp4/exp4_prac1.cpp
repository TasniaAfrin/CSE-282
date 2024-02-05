#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>mystack;
    int value, sum=0;

    for(int i=0; i<5; i++)
    {
        cout<<"Take a value: ";
        cin>>value;
        mystack.push(value);
    }
    stack<int>tempstack;
    while(!mystack.empty())
    {
        sum += mystack.top();
        tempstack.push(mystack.top());
        mystack.pop();
    }
    while(!tempstack.empty())
    {
        mystack.push(tempstack.top());
        tempstack.pop();
    }
    cout<<"The summation of stack elements: "<<sum<<endl;
    return 0;
}

#include<iostream>
#include<stack>
using namespace std;
int factorial(int n)
{
    return(n<=1)? 1: n*factorial(n-1);
}
int main()
{
    stack<int>mystack;
    cout<<"Enter 6 integer values(0-5): "<<endl;
    for(int i=0; i<6; i++)
    {
        int value;
        cin>>value;
        mystack.push(value);
    }
    int index=0;
    cout<<"Factorials: "<<endl;
    stack<int>outputstack;
    while(!mystack.empty())
    {
        int currentValue=mystack.top();
        outputstack.push(factorial(currentValue));
        mystack.pop();
        index++;
    }
    index=0;
    while(!outputstack.empty())
    {
        cout<<"Factorial: "<<index++ <<"= "<<outputstack.top()<<endl;
        outputstack.pop();
    }
    return 0;
}

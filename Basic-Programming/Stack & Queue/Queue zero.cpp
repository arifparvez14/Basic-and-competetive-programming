#include<bits/stdc++.h>
using namespace std;
void QueueOperation(queue<int>&q)
{
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
int main()
{
    queue<int>Queue;
    Queue.push(10);
    Queue.push(20);
    Queue.push(30);
    Queue.push(40);
    QueueOperation(Queue);

    //Queue.pop();
    //QueueOperation(Queue);
    return 0;
}


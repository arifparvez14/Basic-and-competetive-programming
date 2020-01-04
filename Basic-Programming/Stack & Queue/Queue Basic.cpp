#include<bits/stdc++.h>
#define Q_SIZE 5
using namespace std;

typedef struct{
    int data[Q_SIZE +1];
    int head,tail;
}Queue;

void enqueue(Queue *q, int item)
{
    if((q->tail +1 ) %(Q_SIZE + 1) == q->head){
        cout<<"Queue is full";return;}
    q->data[q->tail] = item;
    q->tail = (q->tail+1) %(Q_SIZE+1);

}
int dequeue(Queue *q)
{
    int item;
    if(q->tail == q->head){
        cout<<"Queue is empty";
        return -1;
    }
    item=q->data[q->head];
    q->head=(q->head +1)%(Q_SIZE+1);
    return item;
}
int main()
{
    Queue my_q;
    int item;

    my_q.head=0;
    my_q.tail=0;

    enqueue(&my_q,1);
    cout<<my_q.tail;

    enqueue(&my_q,2);
    cout<<my_q.tail;

    enqueue(&my_q,3);
    cout<<my_q.tail;

    enqueue(&my_q,4);
    cout<<my_q.tail;

    enqueue(&my_q,5);
    cout<<my_q.tail;

    enqueue(&my_q,6);
    cout<<my_q.tail<<endl;;

    cout<<my_q.head;
    item=dequeue(&my_q);
    cout<<my_q.head;
    item=dequeue(&my_q);
    cout<<my_q.head;
    item=dequeue(&my_q);
    cout<<my_q.head;
    item=dequeue(&my_q);
    cout<<my_q.head;
    item=dequeue(&my_q);
    cout<<my_q.head;
    item=dequeue(&my_q);

}


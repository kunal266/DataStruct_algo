#include <iostream>

using namespace std;
struct Queue {
    int *Q ;
    int front;
    int rear ;
    int size;
};

void Create (struct Queue *q ){
    cout<< "Enter the size of queue \n";
    cin>> q->size;
    q->Q = new int [q->size];
}

void enqueue(struct Queue *q ,int x){
    if(q->rear == q->size -1){
        cout<<"the queue is full \n " ;
    }
    else {
    q->rear++ ;
    q->Q[q->rear] = x;
    }
}
int dequeue (struct Queue *q){
    int x = -1;
    if(q->rear == q->front){
        cout<<"queue is full";

    }
    else{
        q->front++;
        x = q->Q[q->front ];

    }
    return x ;
}
void Display(struct Queue q){
    for(int i = 0; i < q.size ; i++ ){
        cout<<q.Q[i] << " ";
    }
    cout<< " \n";
}
int main()
{
    struct Queue q ;


    q.front = q.rear = -1 ;
    Create(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    Display(q);
    cout<< dequeue(&q);
    return 0;
}

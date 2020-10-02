#include <iostream>

using namespace std;

struct Queue {
    int Size ;
    int first;
    int last ;
    int *Q ;
};

void enqueue (Queue *q , int x){
    if (q->last == q->Size - 1){
        cout << "Queue is full \n" ;
    }
    else {
        q->last++ ;
        q->Q[q->last] = x;
    }
}

int dequeue (Queue *q){
    int x = -1 ;
    if (q->first == q->last){
        cout << "Queue is Empty \n" ;
    }
    else {
        q->first++;
        x = q->Q[q->first];

    }
    return x ;

}


int main()
{
    struct Queue q ;
    q.Size = 5;
    q.Q = new int[q.Size];
    q.first = q.last = -1 ;
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    for (int i =0  ; i <5 ; i++){
        cout <<dequeue(&q) << "\n";
    }
    return 0;
}



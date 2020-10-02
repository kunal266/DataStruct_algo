#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data ;
    Node *next ;
}*front=nullptr , *Rear=nullptr;

void Enqueue( int x ){
     struct Node *temp ;
    if(front == nullptr && Rear == nullptr){
        temp = new Node ;
        temp ->data = x ;
        temp->next = NULL;
        front = Rear = temp ;
    }
    else{
        temp = new Node ;
        temp -> data = x;
        temp -> next = NULL ;
        Rear = temp ;
    }
}
void Dequeue(){
    struct Node *temp;
    int x ;
    temp = front ;
    if(front){
    front = front->next;
    delete(temp);
    }
    else {
        front = Rear = nullptr;
        delete(temp);
    }


}

int peak (){
    struct Node *temp;
    temp = front;

        return temp -> data;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q , x ,y;
    cin >> q ;
    for (int i = 0 ; i<=10 ; i++){
        cin >> x ;
        if (x == 1){
            cin>>y;
            Enqueue(y);
        }
        else if (x==2){
            Dequeue();
        }
        else if( x==3){
            int result = peak();
            cout<< result ;
        }
    }
    return 0;
}

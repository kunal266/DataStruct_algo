#include <iostream>

using namespace std;

struct Node {
    int data ;
    Node *next;

}*Front ,*Rear = NULL ;

void enqueue (int data){
    struct Node *temp;
    temp = new struct Node ;
    temp -> data = data ;
    temp->next = NULL;
    if (Front == NULL){

        Front = Rear = temp ;

    }
    else {
        Rear->next = temp;
        Rear = temp ;
    }

}
int dequeue (){
    struct Node *P ;
    int x = -1 ;
    if (Front == NULL){
        cout <<"Queue is Empty" ;
        return x ;
    }
    else{
        x = Front -> data ;
        P = Front ;
        Front = Front -> next;
        delete(P);
        cout << x <<"\n";

    }
    return x ;

}
int main()
{

    for(int i = 0 ; i < 5 ; i++){
        enqueue(i);
    }
    for (int i = 0 ; i < 5 ; i++){
        dequeue();
    }
    return 0 ;
}

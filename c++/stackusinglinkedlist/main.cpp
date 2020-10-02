#include <iostream>

using namespace std;

struct node {
    int data;
    node *next;
} *top = nullptr;


void Display(struct node *p){
    while (p){
        cout<<p->data << " " ;
        p = p->next;
    }
}

void push (int x){
    node *temp;
    temp = new node ;
    if(temp == nullptr){
        cout<<("Stack-overflow");
    }
    else{

        temp->next = top;
        temp->data = x;
        top = temp;

    }

}

int pop (){
    int x = -1;
    if(top == nullptr){
        cout<< "Stack is Empty" ;
    }
    else {
    node *p = top;
    top = top -> next;
    x = p->data ;
    delete(p);
}
    return x ;
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    Display(top);

    return 0;
}

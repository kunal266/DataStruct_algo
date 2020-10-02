#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Node {
    public:
        int data ;
        Node *next;

} *Head =NULL;
void create(int A[], int n ){
    Node *temp, *Last ;

    Head = new Node;
    Head ->data = A[0];
    Head ->next = NULL;
    Last = Head;

    for(int i =1 ; i< n ;i++){
        temp = new Node;
        temp ->data =A[i];
        temp ->next = NULL;
        Last -> next = temp;
        Last = temp;
    }


}
void display(Node *p){
    while (p != NULL){
        cout<< p->data <<endl;
        p = p->next;
    }

}
int main (){
    int A[]={1,2,3,4,5,6};
    create(A,6);
    display(Head);

    return 0;
}

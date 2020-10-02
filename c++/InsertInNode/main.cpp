#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;
}*head = NULL;

void insertArray (int A[] , int length){
    Node *p = head ;
    Node *temp = NULL;

   // while (p->next){
    //        p = p->next;

    //}

    temp = new Node;
    temp->data = A[0] ;
    temp->next = NULL;
    p = temp;
    head = temp;


    for (int i = 1 ; i < length ; i ++){
        temp = new Node ;
        temp->data = A[i];
        temp->next = NULL;
        p -> next = temp ;
        p = temp ;

    }
}


// Check if node if empty
int isEmpty(){
    if(head != NULL){
        return true ;
    }
    else {
        return false ;
    }

}
void insertAtMiddle (int item , int d){
    Node *p ;
    Node *q ;
    Node *temp ;


}



//BOOL function
bool insertBeforeNode(int item , int d){
    int value = 0 ;
    if (isEmpty()){
        //int value = insertNode(item, d);

    Node *temp = NULL;
    Node *p = head;
    Node *q = NULL ;
    int value = 0;
    while ( p ){

        if(p->data != item){
            q = p;
            p = p->next ;
        }
        else if (p->data == item){

            temp = new Node;
            temp->data = d ;
            temp->next = NULL;
            if (p == head){
                head = temp;
                temp->next = q;
            }
            else {

                temp ->next = p ;
                q->next = temp;
            }
            value = 0;
            break;
    }


    if (p == NULL){
            temp = new Node ;
            temp ->data = d;
            temp->next = NULL;
            temp->next = head ;
            head = temp;
            value = 0 ;

    }




    }
        if (value == 0){
            return true;
        }
        else {
            return false;
        }


    }
    else {
        return false ;
    }

}

// Function for Displaying Node
void Display (){
    Node *p = head ;
    while (p){
        cout << p->data<<" ";
        p = p->next;
        }
}

int main()
{
    int Arr[] = {10,20,30,40};
    // Testing


    insertArray(Arr , 4);
    if(insertBeforeNode(70,202)){
       cout << "Successfully Inserted \n";
   }
    else {
        cout << "Insertion failed \n";
    }

    Display();


    return 0;
}

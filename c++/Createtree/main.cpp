#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data ;
    Node *Lchild;
    Node *Rchild;

} *root=nullptr;

void create (){
    queue <Node*> q;

    struct Node *P, *temp;
    int x ;

    cout<<"Enter the Root Value \n" ;
    cin>> x ;
    root = new Node ;
    root -> data = x;
    root -> Lchild = root-> Rchild = nullptr ;

     q.push(root);

     while (!q.empty()){
        P = q.front();
        q.pop();
        cout<<"enter the Left child of " << P->data << "\n" ;
        cin >> x ;
        if(x != -1){
            temp = new Node;
            temp -> data = x;
            temp -> Lchild = temp-> Rchild = nullptr ;
            P->Lchild = temp;
            q.push(temp);

        }


        cout<<"enter the Right child of " << P->data<< "\n" ;
        cin >> x ;
        if(x !=- 1){
            temp = new Node;
            temp -> data = x;
            temp -> Lchild = temp-> Rchild = nullptr ;
            P->Rchild = temp;
            q.push(temp);

        }
     }

}
void  preorder (struct Node *p){
    if(p){
        cout<< p->data << "\n";
        preorder(p->Lchild);
        preorder(p->Rchild);
    }


}
int main()
{
    create();
    preorder(root);

}

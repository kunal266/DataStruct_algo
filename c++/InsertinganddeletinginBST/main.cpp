#include <bits/stdc++.h>

using namespace std;

class Node {
    public :
        int data ;
        Node *leftchild ;
        Node *rightchild ;
} *root = NULL;

void Insert(Node *root , int x){
    Node *node ;
    if(root == NULL){
        node = new Node ;
        root =  node ;
        node->data = x ;
        node->leftchild = NULL:
        node->rightchild = NULL;

    }
    else {
            while (root->leftchild != NULL || root->rightchild != NULL)   {
                if(root->data > x){
                    root = root->left;
                }
                else {
                    root = root->right;
                }
            }


    }



}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

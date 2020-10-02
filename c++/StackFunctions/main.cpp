#include <iostream>

using namespace std;

struct Stack {
    int size ;
    int top ;
    int *s ;
};

int peek (Stack st , int pos){
    int x = -1 ;
    if (st.top - pos + 1 <0){
        cout << "Invalid operation" << "\n";
    }
    else {
        x = st.s[st.top-pos+1];

    }
    return x;

}
void pop (Stack *st ){
    int x = -1;
    if (st -> top == -1){
        cout <<"Stack underflow " << "\n";
    }
    else {
        x = st->s[st->top];
        st->top--;
        cout << x << "\n" ;
    }

}

void push (Stack *st ,int x){

    if (st->top == st->size-1){
        cout << "Stack overFlow" << "\n" ;

    }
    else {
        st -> top++ ;
        st->s[st->top] = x ;
    }

}

int main()
{
    struct Stack st ;
    st.size = 5 ;
    st.s  = new int[st.size];
    st.top = -1;
    push(&st , 2);
    push (&st , 3);
    push (&st , 4);
    push (&st , 5);
    push (&st , 6);
   cout<< peek(st , 3);





    return 0;

}

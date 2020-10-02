#include <iostream>
#include <cstring>

using namespace std;

struct stack {
    char *arr ;
    int top;
    int size;
};

//void create(struct stack *st){
//    cout<<"enter the size of the stack \n" ;
//    cin>>st->size ;
//    st->top = -1 ;
//    st->arr = new int[st->size];
//}

void display(struct stack st){
    if (st.top==-1){
     cout<<"Stack empty";
    }
    else{
        for(int i = st.top ; i>=0; i--){
            cout<<st.arr[i]<<" ";
    }

}}
void push (struct stack *st,char x){
    if (st->top == st->size-1){
        cout<<"Stack-overflow";
    }
    else{
        st->top ++;
        st->arr[st->top]=x ;
    }
}
int pop(struct stack *st){
    char x = -1;
    if(st->top == -1){
        cout<<"Stack underflow";
    }
    else{
        x = st->arr[st->top];
        st->top--;
        }
    return x ;
}

int isEmpty(struct stack st ){
    if (st.top == -1 )
        return 1 ;
    else
        return 0;

}

// paranthesis matching function

int isMatching(char *exp){
    struct stack st ;
    st.top = -1;
    st.size = strlen(exp);
    st.arr = new char[st.size];

    //initialization of stack
    int i = 0;
    for (i = 0 ; exp[i] !=0 ; i++){
        if(exp[i]=='('){
            push(&st,exp[i]);
           }
        else if (exp[i]==')'){
            if(isEmpty(st)){
                return false;
            }
            pop(&st);
        }
    }
    return isEmpty(st)? true : false;


}
int main()
{

    char *exp = "((a+b)*(a-b)))";
    cout<<isMatching(exp);




    return 0;
}

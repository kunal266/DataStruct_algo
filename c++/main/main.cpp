#include <iostream>
#include <vector>
#include <stdio.h>


using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
int i;
printf("\nElements are\n");
for(i=0;i<arr.length;i++)
printf("%d ",arr.A[i]);
}

int Get(struct Array arr,int index){
    if (index>=0 && index<arr.length)
    return arr.A[index];
    else
        return -1;
}

int Max(struct Array arr ){
    int max = arr.A[0];
    for ( int i = 1 ; i < arr.length ; i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }return max;
}

int sum (struct Array arr){
    int total = 0 ;
    for ( int i = 0 ; i<arr.length ; i++){
        total = total+arr.A[i];
    }
    return total;
}

void Reverse(struct Array *arr){
    int *B;
    int i ,j;
    B=new int[arr->length];
    for ( i = arr->length-1 , j = 0  ; i >=0,j<= arr->length-1 ; i--,j++ ){

        B[j]=arr->A[i];
    }
    for(int i = 0 ; i<arr->length-1 ; i++){
        arr->A[i]=B[i];
    }
}

int main(){
    struct Array arr = {{2,24,56,30,6},10,5};
    Reverse(&arr);
    Display(arr);
   return 0;
}

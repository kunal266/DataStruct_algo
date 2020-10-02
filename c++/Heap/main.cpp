#include <iostream>

using namespace std;

void Array (int A[] , int n){
    A[n] = 100 ;
}

void Array2 (){
     int K[] = {10,20,30,40,50};
     Array(K , 2);
     for (int i = 0 ; i < 5 ; i++){
        cout<<K[i];
    }
    cout << "\n";
}
int main()
{
    int H[] = {10,20,30,40,50};
    Array(H , 2);
    Array2();
    for (int i = 0 ; i < 5 ; i++){
        cout<<H[i];
    }
    return 0;
}

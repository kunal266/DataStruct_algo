#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    long double arr[n];
    long double positive = 0 , zero = 0 ,negative = 0;

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    for (int i = 0 ; i < n ; i ++){
        if (arr[i] < 0){
            negative ++ ;
        }
        if (arr[i] == 0){
            zero ++;

        }
        if (arr[i]>0){
            positive ++;
        }
    }
    cout << positive / n << "\n" ;
    cout << negative / n << "\n" ;
    cout << zero / n << "\n";

    return 0 ;
}

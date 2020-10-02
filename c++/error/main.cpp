#include <bits/stdc++.h>

using namespace std;

int main (){
    long int n , m, a , b , k , max = INT_MIN ;
    cin >> n >> m;
    vector<long int> arr(n+1);

    for(long int i = 0 ; i < m ; i++){
        cin >> a >> b >> k;
        arr [a] +=  k ;
        if( b <= n){
        arr [b+1] -=  k ;
        }

    }
    for (long int i = 0 ; i < n ; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    for (long int i = 0 ; i < n ; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    cout << max;
    return 0 ;

}

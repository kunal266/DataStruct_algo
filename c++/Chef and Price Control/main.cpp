#include <iostream>

using namespace std;

int main()
{
    int t , n , k  ;
    int s;
    int p[10000];
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        cin >> n >> k;
       int loss = 0 , profit = 0;
        for(int i = 0 ; i < n ; i++){
            cin>> p[i];
        }
        for(int i = 0 ; i < n ; i++){
            profit =  profit + p[i];
            if(p[i] > k){
                p[i]= k ;
        }
        loss = loss + p[i];

    }
            cout << profit-loss ;


}
return 0;
}

#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t !=0){

        int N ;
        cin >> N ;

        int A[100];
        for (int j = 0 ; j < N ; j++){
            cin>> A[j];
        }
        set <int , greater <int> > S;

        for(int j = N-1 ; j >=0 ; j--){
            S.insert(A[j]);
        }
        set <int , greater <int> > :: iterator itr;

        for(itr = S.begin()  ; itr != S.end()  ;itr++){
            cout<<'\t'<< *itr << "\n";
        }

        //cout << *S.end();
        itr = prev(S.end());
        cout << *itr  ;

        if(S.size() == 1 && *itr == 0){
                cout << 0 << endl;

        }
        else if (*itr == 0){
            cout << S.size() -1 << endl;

        }
        else {
            cout << S.size();
        }
        t--;

    }
    return 0;
}

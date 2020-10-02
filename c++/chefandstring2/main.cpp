#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int t ;

    cin >> t;
    for(int i = 0 ; i < t ; i++){
        long int gap = 0 , diff = 0;
        long int N;
        cin >> N ;
        long int S[N];
        for(int i = 0 ; i < N ; i++){
            cin >> S[i];
        }
        for(int i = 0 ; i < N-1 ; i++){
            diff = S[i]- S[i+1];
            gap += abs(diff) -1 ;
        }
         cout << gap << "\n";
    }


}

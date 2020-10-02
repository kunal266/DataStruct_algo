#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0 ; i<t ; i++){
        string S;
        cin>>S;
        int k = 0 , j = 1 , max = 0;
        while( j < S.size()){
            if((S[k] == 'x' && S[j] == 'y') || (S[k]== 'y' && S[j]=='x')){
                max++;
                k++;
                k++;
                j++;
                j++;
            }
            else{
                k++;
                j++;
            }
        }
        cout<< max << "\n";
    }
    return 0;
}

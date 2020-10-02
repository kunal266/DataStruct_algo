#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t , l ;
    char s [100];
    cin >> t ;
    while(t--){
    cin >> s ;
    l = strlen(s);
    if( l <=10){
        cout << s << "\n";
    }
    else {
        cout<< s[0] << l-2 << s[l-1]<<"\n";
    }
    }

    return 0;
}

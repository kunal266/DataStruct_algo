#include <iostream>

using namespace std;
int power (long long card){
    int sum = 0 , digit ;
    for (sum = 0 ;card>0;sum+=card % 10 , card/= 10);
    return sum ;
}

int main()
{
    int t ;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        int N ;
        long long chef = 0 , morty = 0;
        cin>>N;
        for(int i = 0 ; i < N ; i++){
            long long chefcard , mortycard ,chefpower = 0 , mortypower = 0;
            cin>> chefcard>>mortycard;
            chefpower = power(chefcard);
            mortypower = power(mortycard);
            if (chefpower > mortypower){
                chef++ ;
            }
            else if (mortypower > chefpower){
                morty++ ;
            }
            else {
                chef++;
                morty++;

            }

        }
        if(chef > morty){
            cout << 0 <<" " << chef << "\n";
        }
        else if (morty > chef){
            cout << 1 <<" " << morty<<"\n";
        }
        else {
            cout<< 2 << " "<<chef<<"\n";
        }


    }
    return 0;
}

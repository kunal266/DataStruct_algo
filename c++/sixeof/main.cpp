#include <iostream>

using namespace std;

int main()
{
    double a ;
    cin>>a;
    if (!(cin >> a))
        {
    throw std::invalid_argument("Its not a double");
        }
        else {
    cout << a << endl;}
    return 0;
}

#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{
    int num , x ,y, sum =0;
    x=123405;
    while (x!=0){
    y = x%10;
    sum = sum +( y * y * y );


    x = x/10;



    }
    cout<< sum;

    return 0;

    }

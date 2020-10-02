#include <iostream>

using namespace std;

void divide(double a,double b)// change parameter type from int to double
{
        if(b!=0)
        {
            double R;
            R = a/b ;
            cout<<"Result : "<<R<<endl;
        }
        else
            throw b;
}
void exception_handling()

int main()
{
    double a,b;
    cout<<"Enter two double type numbers."<<endl;
    cin>>a;
    try
    {
        if(sizeof(a)!= sizeof(double) )
        {
            cout<<sizeof(a);
            throw a;
        }
        else if (!(cin)>>a){
            throw a;
        }
    }
    catch(...)
    {
        cout<<"Exception caught : "<<a<<" is not a double type number."<<endl;
    }

    cin>>b;
    try
    {
        if(sizeof(b) != sizeof(double))
            throw b;
        else if (!(cin)>>b){
            throw a;
        }
    }
    catch(...)
    {
        cout<<"Exception caught : "<<b<<" is not a double type number."<<endl;
    }

    try
    {
        divide(a,b);
    }
    catch(int b)
    {
        cout<<"Caught an exception : "<<b<<endl;
    }
    return 0;
}



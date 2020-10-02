#include<iostream>
#include<conio.h>
using namespace std;
int size;

class array
{
	int *v;
    public:
	array(int m);	//default constructor
	array(int *x);
	array(array &);	//copy constructor
	~array();	//destructor
	friend istream & operator >> (istream &, array &);
	friend ostream & operator << (ostream &, array &);
	int operator [] (int );
};

array :: array(int m)
{
	v = new int[size = m];
}

array :: array(int *x)
{
	for(int i=0; i<size; i++)
		v[i]=x[i];
}

array :: array(array &a)
{
	for(int i=0; i<size; i++)
		v[i]=a.v[i];
}

array :: ~array()
{
	delete []v;
}

istream & operator >> (istream &input, array &a)
{
	for(int i=0; i<size; i++)
		input>>a.v[i];
	return input;
}

ostream & operator << (ostream &output, array &a)
{
	output<<a<<" = ("<<a.v[0];
	for(int i=1; i<size; i++)
		output<<","<<a.v[i];
	output<<") \n";
	return output;
}

int array :: operator [] (int a)
{
	if(a>size)
	{
		cout<<"Index out of bounds. \n";
		return 0;
	}
	else
		return v[a];
}

int main()
{
	//clrscr();
	array p(3);	//calling default constructor
	int x[5] = {1,2,3,4,5};
	array q(5);
	q=x;	//calling parameterized constructor
	cout<<"Enter elements for array a3. \n";
	array r(7);
	cin>>r;		//calling overloaded >> function
	getch();
	array s = q; 		//calling copy constructor

	cout<<p;
	cout<<q;	//calling overloaded << function
	cout<<r;	//calling overloaded << function
	cout<<s;

	cout<<"Enter the array no. whose element you want. \n";
	cout<<"p=1	q=2	r=3	s=4 \n";
	int arr;	cin>>arr;
	cout<<"Which element no. you want? \n";
	int ele; cin>>ele;
	if(arr==1)
	{
		cout<<ele<<" element of p array is "<<p[ele];
	}
	else if(arr==2)
	{
	       cout<<ele<<" element of q array is "<<q[ele];
	}
	else if(arr==3)
	{
		cout<<ele<<" element of r array is "<<r[ele];
	}
	else if(arr==4)
	{
		cout<<ele<<" element of s array is "<<s[ele];
	}
	else
		cout<<"Array not found. \n";

	return 0;
}

#include <iostream>
#include <conio.h>
using namespace std;

const int size = 5;
template <class t>
class vector
{
	t v [size];
    public:
	vector();
	vector(t *a);
	template<class u>
	friend vector<u> operator *(t a, vector<u> &b);
	void modify();
	void display();
};
template<class t>
vector<t> :: vector()
{
		//v = new int[size];
		for(int i=0; i<size; i++)
		{
			v[i]=0;
		}
}
template<class t>
vector <t> :: vector(t *a)
{
		for(int i=0; i<size; i++)
		{
			v[i]=a[i];
		}
}
template <typename u>
vector <u> operator *(u a, vector<u> &b)
{
	vector<u> c;
	for(int i=0; i<size; i++)
	{
		c.v[i]=a*b.v[i];
	}
	return c;
}
template<class t>
void vector<t> :: modify()
{
	int i,j;
	cout<<"Enter the element;s location you want to modify and the new value."<<endl;
	cin>>i>>j;
	v[i]=j;
}
template<class t>
void vector<t> :: display()
{
	cout<<"("<<v[0];
	for(int i=1; i<size; i++)
	{
		cout<<","<<v[i];
	}
	cout<<")"<<endl;
}


int main()
{
	//clrscr();
	int x[size];
	cout<<"Enter elements of vector."<<endl;
	for(int i=0; i<size; i++)
		cin>>x[i];
	vector<int> v1=x;
	v1.modify();
	vector<int> &v2 = v1;

	cout<<"v1 = ";
	v1.display();
	cout<<"v2 = ";
	v2.display();
	getch();
	return 0;
}

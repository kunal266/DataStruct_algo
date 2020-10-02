#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>

using namespace std;
class teacher
{
	char name[10],depart[10],contact[10],subject[10];
	int absent , present  , holiday , dd, mm, yy;
    public:

	void get();
	void put();
	void names(int q);
	void mark();
	void display();
	void check();
	void date();
	//void fileinput();
};

void teacher :: names(int q)
{
	cout<<name<<" = "<<q<<"\n";
}

void teacher :: get()
{
	cout<<"Enter teacher's name : "; cin>>name;
	cout<<"Enter teacher's department : "; cin>>depart;
	cout<<"Enter teacher's subject : "; cin>>subject;
	cout<<"Enter teacher's contact : "; cin>>contact;
	cout<<"\n";
}

void teacher :: put()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Department : "<<depart<<endl;
	cout<<"Subject : "<<subject<<endl;
	cout<<"Contact : "<<contact<<endl;
	cout<<"\n";
}

void teacher :: check()
{
	if(mm>=1 && mm<=12)
	{
		if(mm==2)
		{
			if(yy%4==0)
			{
				if(dd<1 || dd>29)
				{
					cout<<"Wrong date \n";
					exit(0);
				}
			}
			else if(dd<1 || dd>28)
			{
				cout<<"Wrong date \n";
				exit(0);
			}
		}
		if(mm==4 || mm==6 || mm==9 || mm==11)
		{
			if(dd<1 || dd>30)
			{
				cout<<"Wrong date \n";
				exit(0);
			}
		}
		if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)
		{
			if(dd<1 || dd>31)
			{
				cout<<"Wrong date \n";
				exit(0);
			}
		}
	}
	else
	{
		cout<<"Wrong month \n";
		exit(0);
	}
}

void teacher :: date()
{
	cout<<"Enter date for which you want to mark attendence in form of dd, mm, yy \n";
	cin>>dd>>mm>>yy;
	check();
}

void teacher :: mark()
{

	cout<<"Select attendence option for "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	cout<<"Absent = A \n";
	cout<<"Present = P \n";
	cout<<"Holiday/no class = H \n";
	char z;	cin>>z;

	switch(z)
	{
		case 'a':
		{
			absent = ++absent;
		}

		case 'p':
		{
			present = ++present;
		}

		case 'h':
		{
			holiday = ++holiday;
		}
		default :
			cout<<"Not a valid option \n\n";
	}
	cout<<"Attendence marked successfully. \n\n";
}

void teacher :: display()
{
	cout<<"Total attendance : "<<present<<endl;
	cout<<"Total leave/absent : "<<absent<<endl;
	cout<<"Total holidays : "<<holiday<<endl;
}
//below function is to handle fsstream input to sample.txt


int main()
{
	//clrscr();
	teacher T[3];

	fstream file;
	file.open("sample.txt", ios::in | ios::out | ios::ate | ios::binary);
	int i = 1;
	for( i ; i<=3; i++)
	{
	    if(file.is_open()){
		T[i].get();
		//file.write((char*)&T[i], sizeof(T[i]));
		//file << T[i].get();
		file << T[i] << " ";
	    }
	}

	first:
	cout<<"Select a teacher whose data you want by entering its position number \n\n";
	cout<<"Teacher's list \n";
	cout<<"--------------------- \n";
	file.seekp(0);
	int q=1;

	while(file.read((char *) & T[i], sizeof(T[i])) && i <=3)
	{
		T[i].names(q);
		q++;

	}
	file.clear();
	cout<<"---------------------- \n\n";
	cout<<"Add another teacher's data = 100 \n";
	cout<<"Modify a teacher's data = 200 \n";
	cout<<"Exit = 500 \n";
	int n; cin>>n;

	if(n==100)
	{
		T[i].get();
		file.write((char *) & T[i], sizeof(T[i]));
		cout<<"Successfully added \n\n";
		cout<<"Go back = 300 \n";
		cout<<"Exit = 500 \n\n";
		int r; cin>>r;
		if(r==300)
			goto first;
		if(r==500)
			exit(0);
	}
	else if(n==200)
	{
		cout<<"Enter the object no. to be modified : ";
		int mod; cin>>mod;
		i=mod;
		int location = (mod-1)*sizeof(T[i]);
		file.seekg(location);
		cout<<"Enter new data. \n";
		T[i].get();
		file.write((char *) & T[i], sizeof(T[i]));
		cout<<"Successfully modified \n\n";
		cout<<"Go back =300 \n";
		cout<<"Exit =500 \n\n";
		int r; cin>>r;
		if(r==300)
			goto first;
		if(r==500)
			exit(0);
	}
	else if(n==500)
		exit(0);
	else
	{
		i=n;
		second:
		cout<<"\n";
		cout<<"Select an activity by entering its position number \n\n";
		cout<<"Activity list \n";
		cout<<"------------------- \n";
		cout<<"Show teacher's data = 1\n";
		cout<<"Mark attendence = 2 \n";
		cout<<"Display attendence = 3 \n";
		cout<<"-------------------- \n\n";
		cout<<"Go back = 300 \n";
		cout<<"Exit = 500 \n\n";
		int num; cin>>num;
		if(num==1)
		{
			T[i].put();
			cout<<"Go back = 300 \n";
			cout<<"Exit =500 \n\n";
			int r; cin>>r;
			if(r==300)
				goto second;
			if(r==500)
				exit(0);
		}
		else if(num==2)
		{
			T[i].date();
			T[i].mark();
			cout<<"Go back =300 \n";
			cout<<"Exit = 500 \n\n";
			int r; cin>>r;
			if(r==300)
				goto second;
			if(r==500)
				exit(0);
		}
		else if(num==3)
		{
			T[i].display();
			cout<<"Go back = 300 \n";
			cout<<"Exit = 500 \n\n";
			int r; cin>>r;
			if(r==300)
				goto second;
			if(r==500)
				exit(0);
		}
		else if(num==300)
			goto first;
		else if(num==500)
			exit(0);
	}


	getch();
	return 0;
}

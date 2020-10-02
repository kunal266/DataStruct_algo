#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};

struct node* start;

void create(){ //made it function so that whenever want to change value of start to NULL just call the function
	start = NULL;
}

void insertFirst(int d){


	struct node* t = new node; // memory allocation done here
	t -> data = d;t -> next = NULL;

	if(start==NULL){
		start = t;
	}
	else{
		t -> next = start; //bcoz start holds the address of existing first node
		start = t;
	}
	cout<<"Insertionn Done @ Beg."<<endl;
}

void display()
{
  if(start== NULL)
  {
  cout<<"List is empty"<<"\n";
  }
  else{
  struct node* p=start;
  cout<<"List has following elements ";
   while(p!=NULL)
   {
   cout<<p->data<<"\t";
   p=p->next;
   }
    cout<<"\n";
  }

}


bool insertBeforeNode(int item,int d)
{
	if (start==NULL) //if empty no insertion
	{
		return false;
	}
	else
	{

	struct node* m ;

	struct node *p=start;
	while(p!=NULL)
	{
			m = p->next;

		if(item == m -> data){
			m = p;
			break;
		}
		else{
			p=p->next;
		}
	}

	if(p==NULL) //if item not present in list inserted at beggining
	{
		node *temp ;
		temp -> data = d;
		temp->next = NULL;
		temp->next  =start;
		start = temp;
		return true;
	}


		struct node* t = new node;
		t -> data = d;

	struct node* p1 = start;
	if (start==NULL)
	{
		return false;
	}
	while(p1!=NULL)
	{
		if(m==p1)
		{
			t->next = p1->next;
			p1->next = t;
			return true;
		}
		else
		{
			p1=p1->next;
		}
	}
	}
}







main()
{

	insertFirst(10);
	insertFirst(20);
	insertFirst(30);
	insertFirst(40);
	insertFirst(50);
	display();

	insertBeforeNode(70,202);

	display();

}

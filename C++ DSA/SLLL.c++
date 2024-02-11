//Single Linked list
#include <iostream>
#include<stdio.h>
#define clrscr()system("cls")
using namespace std;
class node
{
	int data;
	node*add;
};
node*star=NULL,*new1,*temp;
int main()
{
	cout<<"-----------Linked List---------";
	cout<<"\n 1.Create";
	cout<<"\n 2. Display";
	cout<<"\n Exit";
	cout<<"\n---------------";
	cout<<"Enter your choice";
	cin>>choice;
	switch(choice)
	{
	case 1: create();
		break;
	case 2: display();
		break;
	}while(choice!=3);
	return 0;
}
void create()
{
	int n;
	char ch;
	cout<<"\nEnter an element";
	cin>>n;
	start= new node;
	start->data=n;
	start->add=NULL;
	temp=start;
	cout<<"Want to continue";
	c>>ch;
	while(ch=='y'|| ch='Y')
	{
		cout<<"\nEnter an nextelement";
		cin>>n;
		new1=new node;
		new1->data=n;
		new1->add=NULL;
		temp->add=new1;
		temp=temp->add;
	}
}
void display()
{
	if(start==NULL)
		cout<<"\nList not found";
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			cout<<"temp->data<<" ";
			temp=temp->add;
		}
	}
}
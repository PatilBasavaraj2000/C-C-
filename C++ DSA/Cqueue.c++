#include<iostream>
#define MAXSIZE 10
#define clrscr() system("cls")
using namespace std;
class MYCqueue
{
 private:
 int rear,front;
 int cq[MAXSIZE];
 public:
 	MyCqueue()
 	{
 		rear=-1;
 		front=-1;
 	}
 	void insert();
 	void delete();
 	void display();
 };
 void MyCqueue::insert()
 {
 	if((rear+1)%MAXSIZE==front)
 		cout<<"/n Queue is Overflow";
 	else
 	{
 		cout<<"/nEnter element";
 		c>>n;
 		if (front==-1 && rear==-1)
 			front=rear=0;
 		else
 			rear= (rear+1)%MAXSIZE;
 		cq[rear]=n;
 	}
 }
 void MyCqueue::delete1()
 {
 	int n;
 	if((front==-1 && rear==-1))
 	cout<<"/nQuery is empty";
 else
 {
 	n=cq[front];
 	if(front==rear)
 	{
 		front=-1;
 		rear=-1;
 	}
 	else
 		front=(front+1)%MAXSIZE;
 	cout<<"/nDeleted Element"<<n;
   }
 }
 void MyCqueue::display()
 {
 	int i;
 	if((front==-1 && rear==-1))
 	cout<<"/nQuery is empty";
     else
     {
     	for(i = front;i!=rear;i=(i+1)%MAXSIZE)
     	{
     		cout<<" "<<cq[i];
     	}
     	    cout<<" "cq[i];
     }
 }
 int main()
 {
 	clrscr();
 	int choice;
 	MyCqueue M;
 }
 do
{
 cout<<"n-------Circular Queue Menu--------------";
 cout<<"\n1.INSERT;
 cout<<"\n2.DELETE;
 cout<<"\n3.DISPLAY;
 cout<<"\n4.EXIT;
 cout<<"\n--------------------------------";
 cout<<"Enter your choice";
 cin>>choice;
 switch(choice)
 {
   case 1:M.insert();
   break;
   case 2:M.delete();
   break;
   case 3:M.display();
   break;
   case 4:break;
   default:cout<<"\nInvalid choice";
}while(choice!=4);
return 0;

   
 
  


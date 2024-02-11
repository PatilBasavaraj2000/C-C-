#include<iostream>
#define MAXSIZE 10
#define clrscr() system("cls")
using namespace std;
class Myqueue
{
  private:
  int rear,front;
  int queue[MAXSIZE];
  Myqueue()
{
  rear=-1;
  front=O;
}
  void Insert();
  void delete1();
  void display();
};
void Myqueue::insert()
{
  int n;
  if(rear==MAXSIZE-1)
   cout<<"/nQueue is overflow";
 else
 {
  cout<<"/nEnter an element:";
  cin>>n;
  queue{rear]=n;
 }  
}
void Myqueue::delete1()
{
  if(front>rear)
   cout<<"/nQueue is empty";
   else
    {
n=queue[front];
front++;
cout<<"/nDeleted element is:"<<n;
   }
}
void Myqueue::display()
{
  int i;
  if(front>rear)
    cout<<\nQUEUE is Empty";
    else
      {
       cout<<"/nQUEUE Elements:"
       for(!=rear;i>front;i++)
       cout<<" "<<queue[i]
  }
}

int main()
{
 clrscr()
 int choice;
 MYqueue M;
do
{
 cout<<"n-------Queue Menu--------------";
 cout<<"\n1.INSERT;
 cout<<"\n2.DELETE;
 cout<<"\n3.DISPLAY;
 cout<<"\n4.EXIT;
 cout<<"\n--------------------------------";
 cout<<"Enter your choice";
 cin>>choice;
 switch(choice)
}
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















































   
 
  


   
 
  

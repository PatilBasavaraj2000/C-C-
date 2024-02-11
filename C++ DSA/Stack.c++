#include<iostream>
#define MAXSIZE 10
#define clrscr() system("cls")
using namespace std;
class Mystack
{
  private:
  int stack[MAXSIZE];
  int top;
  public:
  Mystack()
{
  top=-1;
 }
  int push();
  int pop();
  int display();
};
int MyStack::push()
{
  int n;
  if(top==MAXSIZE-1)
    cout<<"\nStack is overflow";
  else
  {
   cout<<"/nEnter an element";
   cin>>n;
   top++;
   stack[top]=n; 
  }
}
int Mystack::display()
{
  int i;
    if(top===-1)
      cout<<"/n"<<stack[i];
  }

int Mystack::pop()
{
  int n;
  if(top==-1)
  cout<<"\n"<<Stack is Empty[i];
 else
 {
   n=stack[top];
   top--;
   cout<<"/n Popped Element is:"<<n; 
 }
}
int main()
{
 clrscr();
 int choice;
 MyStack M;
}

do
{
 cout<<"n-------Stack Menu--------------";
 cout<<"\n1.PUSH;
 cout<<"\n2.POP;
 cout<<"\n3.DISPLAY;
 cout<<"\n4.EXIT;
 cout<<"\n--------------------------------";
 cout<<"Enter your choice";
 cin>>choice;
 switch(choice)
}
 {
   case 1:M.push();
   break;

   case 2:M.pop();
   break;
 
   case 3:M.display();
   break;

   case 4:break;

   default:cout<<"\nInvalid choice";
}while(choice!=4);
return 0;

   
 
  

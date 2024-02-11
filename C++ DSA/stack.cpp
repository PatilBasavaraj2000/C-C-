#include <iostream>
#define MAXSIZE 10
#define clrscr system("cls")
using namespace std;
class MyStack{
    private:
    int stack[MAXSIZE],top;
    public:
    MyStack(){
        top=-1;
    }
    int push();
    int pop();
    display();
};
int MyStack::push()
{
    if top == MAXSIZE(-1)
    cout<<"Stack is overflow";
    else
    {
        cout<<"\nEnter an element for pudh";
        cin>>n;
        top++;
        stack[top] = n;
    }
}
int MyStack::display()
{
    if(top==-1)
      cout<<"\nStack is Empty";
     else
     {
        cout<<"\n Stack elements:";
        for(i=top;i>=0)
        cout<<"\n"<<stack[i];
     }

}
int MyStack::pop()
{
   int n;
   if(top==-1)
      cout<<"\nStack is Empty";
     else
     {
       n = Stack[top];
       top--;
       cout<<"\ Popped element is:"<<n;
     }

}
int main(){
    clrscr();
    int choice;
    MyStack M;
    do{
    cout<<"\n ------------Stack Manu-----------------------";
    cout<<"\n1. Push";
    cout<<"\n2. Pop";
    cout<<"\n3. Display";
    cout<<"\n4. Exit";
    cout<<"\n-------------------------------------------------";
    cout<<"\nEnter 
    your choice";
    cin>>choice;
    switch(choice)
    {
        case 1:M.push(); break;
        case 2:M.pop(); break;
        case 3:M.pop(); break;
        default:cout<<"\nnvalid choice";
    }

    }while(choice!=4);
    return 0;
}
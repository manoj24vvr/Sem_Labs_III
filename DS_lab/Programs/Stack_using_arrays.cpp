#include<iostream>
#include<stdio.h>

using namespace std;
#define SIZE 6



class stack
{
	int stk[SIZE];
	int top;
	public:
		void push();		
		int pop();
		void display();
		void isEmpty();
		void isFull();
		stack()
		{
			top=-1;
		}
};

void stack::push()
{
	int item;
	if(top==SIZE-1)
	{
		cout<<"Stack is Full\n";
	}
	else
	{
		cout<<"Enter element to push: \n";
		cin>>item;
		top=top+1;
		stk[top]=item;
	}
}

int stack::pop()
{
	int temp;
	if(top==-1)
	{
		cout<<"Stack is empty:\n";
		return(0);
	}
	else
	{
		temp=stk[top];
		top=top-1;
	}
	return(temp);
}

void stack::display()
{
	if(top==-1)
		cout<<"stack is empty\n";
	else
	{
		cout<<"Elements in stack are :";
		for(int i=top; i>=0; i--)
		{
			cout<<stk[i]<<"  ";
		}
	}
	cout<<endl;
}

void stack :: isFull(){
	if(top == SIZE-1)
	{
		cout<<"true";
	}
	else
		cout<<"false";
}

void stack :: isEmpty(){
	if(top == -1)
	{ 
		cout<<"true";
	} 
	else
		cout<<"false";
}
int main(){
	int option=0;
	stack s;
	int element;
	while(1)
{


cout<<"\nenter 1 to push:\nenter 2 for pop:\n";
cout<<"enter 3 for display:\nenter 4 to check isEmpty\nenter 5 to check isFull\n";


cout<<"Enter option: \n";
cin>>option;



switch(option){
case 1:
s.push();
break;
case 2:
element=s.pop();
cout<<"popped out element is= "<<element<<endl;
break;
case 3:
s.display();
break;
case 4:
s.isEmpty();
break;
case 5:
s.isFull();
break;



default:
cout<<"wrong choice\n";
break;
}
}

return 0;



}

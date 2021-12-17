#include <iostream>
#include<conio.h>
using namespace std;
#define SIZE 5
class Stack_arr{
	int top;
	int stack[SIZE];
	public:
		void push();
		int pop();
		void display();
		int peek();
		void isEmpty();
		void isFull();
		Stack_arr()
		{
			top = -1;
		}
};

// Creating methods of the class Stack_arr explicitly. 

void Stack_arr::push(){
	int variable;
	if(top == SIZE-1){
		cout<<"Stack Overflow\n";
	}
	else{
		cout<<"Enter the element to be inserted: ";
		cin>>variable;
		top += 1;
		stack[top] = variable;
	}
}

int Stack_arr::pop(){
	int temp;
	if(top == -1){
		cout<<"Stack Underflow - (Stack is Empty)";
		return 0;
	}
	else{
		temp = stack[top];
		top -= 1;
	}
	return temp;
}

void Stack_arr::display(){
	if(top == -1){
		cout<<"Stack is Empty";
	}
	else{
		cout<<"Elements in the stack are: ";
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<"\n";
		}
	}
	cout<<endl;
}

int Stack_arr::peek(){
	int variable;
	if(top == -1){
		cout<<"Stack is Empty";
		return 0;;
	}
	else{
		variable = stack[top];
	}
	return variable;
}

void Stack_arr::isEmpty(){
	if(top == -1){
		cout<<"True\n";
	}
	else{
		cout<<"False\n";
	}
}

void Stack_arr::isFull(){
	if(top == SIZE-1){
		cout<<"True\n";
	}
	else{
		cout<<"False\n";
	}
}

int main(){
	int c;
	Stack_arr stk;
	
		cout<<"Select '1' for push(),\n";
		cout<<"Select '2' for pop(),\n";
		cout<<"Select '3' for display(),\n";
		cout<<"Select '4' for peek(),\n";
		cout<<"Select '5' for isEmpty(),\n";
		cout<<"Select '6' for isFull(),\n";
	while(1){
		cin>>c;
		switch(c){
			case 1:
				stk.push();
				break;
			case 2:
				int temp1;
				temp1 = stk.pop();
				cout<<"Popped out element: "<<temp1<<"\n";
				break;
			case 3:
				stk.display();
				break;
			case 4:
				int temp2;
				temp2 = stk.peek();
				cout<<"Top element is: "<<temp2<<"\n";
				break;
			case 5:
				stk.isEmpty();
				break;
			case 6:
				stk.isFull();
				break;
			default:
				cout<<"Invalid Input.\n";
				break;
		}
	}
	getch();
	return 0;
}

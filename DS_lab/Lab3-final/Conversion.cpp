#include <iostream>
using namespace std;
#define SIZE 10

class Stack {
	int top;
	char arr[SIZE];
	public:
		void push(int x);
		char pop();
		char peek();
		int precedence(char c);
		Stack(){
			top=-1;
		}
};
		


void Stack::push(int elem){
	if(top>=SIZE-1){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		arr[++top]=elem;
	}
}



char Stack::pop(){
	char c;
	if(top!=-1){
		c = arr[top];
		arr[top] = '\0';
		top--;
		return c;
	}
	else{
		cout<<"Stack Underflow"<<endl;
	}
	return 0;
}



char Stack::peek(){
	if(top!=-1)
		return arr[top];
	else{
		return -1;
	}
}



int Stack:: precedence(char c){
	switch (c){
		case '-':
		case '+':
			return(1);
			break;
		case '*':
		case '/':
			return(2);
			break;
		case '^':
			return(3);
			break;
		default:
			return(0);
	}
}



string conversion_to_Postfix(string infix){
	infix='('+infix+')';
	int l=infix.size();
	string postfix = "";
	Stack stk;
	for(int i=0;i<l;i++){
		if(isalpha(infix[i])||isdigit(infix[i]))
			postfix+=infix[i];
		else if(infix[i]=='(')
			stk.push(infix[i]);
		else if(infix[i]==')'){
			while(stk.peek()!='(')
				postfix+=stk.pop();
			stk.pop();
		}
		
		else{
			while(stk.precedence(infix[i])<=stk.precedence(stk.peek()))
				postfix+=stk.pop();
			stk.push(infix[i]);
		}
	}
	return postfix;
}


string conversion_to_Prefix(string infix){
	infix='('+infix+')';
	int l=infix.size();
	string prefix;
	Stack stk;
	for(int i=0;i<l;i++){
		if(isalpha(infix[i])||isdigit(infix[i]))
			prefix=infix[i] +  prefix;
		else if(infix[i]=='(')
			stk.push(infix[i]);
		else if(infix[i]==')'){
			while(stk.peek()!='(')
				prefix=stk.pop() + prefix;
			stk.pop();
		}
		else{
			while(stk.precedence(infix[i])<=stk.precedence(stk.peek()))
				prefix=stk.pop() + prefix;
			stk.push(infix[i]);
		}
	}
	return prefix;
}


int main(){
string str;
cout<<"Enter the Infix expression:";
cin>>str;
string e1 = conversion_to_Postfix(str);
string e2 = conversion_to_Prefix(str);
cout<<"\n\nPostfix expression of given Infix expression: "<<e1;
cout<<"\n\nPrefix expression of given Infix expression: "<<e2;
}

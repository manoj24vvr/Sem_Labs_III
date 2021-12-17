#include<iostream>
using namespace std;
class Stack
{
	int size = 100;
	char arr[100];
	int top;
	char pop_element;
	public:
		Stack()
		{
		top = -1;
		}
		void push(char x);
		char pop();
		void display();
		char peek();
		void isfull();
		bool isempty();
};
void Stack::push(char x){
	if(top>=size)
	{
		cout<<"Stack overflow\n";
	}
	else{
		arr[++top]=x;
	}
}
char Stack::pop(){
	if(top<0){
		char null = '\0';
		cout<<"Stack underflow\n";
		return null;
	}
	else{
		pop_element = arr[top];
		top = top-1;
		return pop_element;
	}
}
void Stack::display(){
	if(top==-1){
		cout<<"Empty stack\n";
	}
	else{
		for(int i=0;i<=top;i++){
		cout<<i+1<<"- element in stack "<<arr[i]<<"\n";
		}
	}
}
void Stack::isfull(){
	if(top>=size-1)
	{
		cout<<"Stack is full \n";
	}
	else{
		cout<<"Stack not full\n";
	}
}

bool Stack::isempty(){
	if(top<0){;
		return true;
	}
	else{
		return false;
	}
}
char Stack::peek(){
	if(top==-1){
		cout<<"Empty stack\n";
		return 0;
	}
	else{
//		cout<<arr[top]<<" Top element of stack\n";
		return arr[top];
	}
}

bool parenthesizedCheck(string expr)
{
   Stack s;
   char x;

   for (int i = 0; i < expr.length(); i++)
    {
      if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {       s.push(expr[i]);
          continue;
        }
            if (s.isempty())
            return false;

            switch (expr[i]) {
                case ')':
                x = s.peek();
                s.pop();
                if (x == '{' || x == '[')
                return false;
                

       case '}':
       x = s.peek();
         s.pop();
            if (x == '(' || x == '[')
                return false;
                break;

            case ']':
            x = s.peek();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
    return (s.isempty());
}


int main(){
	bool t;
	string a;       //a represents the parenthesized expression
	cout<<"Enter String to check: \n";
	cin>>a;
	t= parenthesizedCheck(a);
	if(t==0){
		cout<<"\nParenthesized expression is not properly matched";
	}
	else if(t==1){
		cout<<"\nParenthesized expression is properly matched";
	}
}

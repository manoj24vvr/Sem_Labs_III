#include <iostream>
#include <string.h>
using namespace std;
int stack[20];
int top = -1;

void push(int operand)
{
	top++;
	stack[top] = operand;
}

char pop()
{
	int f;
	f = stack[top];
	stack[top] = '\0';
	top--;
	return f;
}

bool isOperand(char c)
{
	return (c >= '0' && c <= '9');
}

int PrefixExpression(char prefix[50])
{
	int length = strlen(prefix);
	for (int i = length - 1; i >= 0; i--)
	{
		if (prefix[i] == ' ')
			continue; 
		if (isOperand(prefix[i]))
		{
			push(prefix[i] - '0');
		}
		else
		{
			int v1 = stack[top];
			pop();
			int v2 = stack[top];
			pop();
			switch (prefix[i])
			{
				case '*':
					push(v1 * v2);
					break;
				case '/':
					push(v1 / v2);
					break;
				case '+':
					push(v1 + v2);
					break;
				case '-':
					push(v1 - v2);
					break;
			}
		}
	}
	return stack[top];
}

int PostfixExpression(char postfix[50])
{
	int length = strlen(postfix);
	for (int i = 0; i < length; i++)
	{
		if (postfix[i] == ' ')
		continue; if (isOperand(postfix[i]))
		{
		push(postfix[i] - '0');
		} else
		{
			int v1 = stack[top];
			pop();
			int v2 = stack[top];
			pop();
			switch (postfix[i])
			{
				case '*':
					push(v2 * v1);
					break;
				case '/':
					push(v2 / v1);
					break;
				case '+':
					push(v2 + v1);
					break;
				case '-':
					push(v2 - v1);
					break;
			}
		}
	}
	return stack[top];
}

int main()
{
	int o;
	cout<<"1) Evaluate Postfix Expression\n2) Evaluate Prefix Expresion\n"<<endl;
	cin>>o;
	if(o == 1){
		char postfix[50];
		cout<<"Input Postfix: "<<endl;
		cin>>postfix;
		int result = PostfixExpression(postfix);
		cout<<"Evaluation: "<<result<<endl;
	}
	if(o == 2){
		char prefix[50];
		cout<<"Input Prefix: "<<endl;
		cin>>prefix;
		int result = PrefixExpression(prefix);
		cout<<"Evaluation: "<<result<<endl;
	}
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool areBracketsBalanced(string exp)
{
	stack<char> s;
	char x;


	for (int i = 0; i < exp.length(); i++)
	{
		if (exp[i] == '(' || exp[i] == '['
			|| exp[i] == '{')
		{
			s.push(exp[i]);
			continue;
		}

		// IF current current character is not opening bracket, then it must be closing. So stack cannot be empty at this point.
		if (s.empty())
			return false;

		switch (exp[i]) {
		case ')':
			
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':

			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}

	// Check if stack is empty
	return (s.empty());
}


int main()
{
	string exp;
	cout<<"Enter a parenthesised expression: ";
	cin>>exp;
	
	if (areBracketsBalanced(exp))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}


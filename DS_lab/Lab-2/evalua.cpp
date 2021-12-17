#include<iostream>
using namespace std;

class Stack{
	
	public:
	int top;
	int arr[100];
	Stack(){
		top = -1;
	}
	void push(int ele) {
		if(top>99){
			cout<<"Stack Overflow";
		}
		else{
			arr[++top]=ele;
		}
	}
	int pop(){
	if(top!=-1)
		return arr[top--];
	else{
		cout<<"Stackunderflow"<<endl;
		}
	return -1;
	}
	
	int peek(){
		if(top!=-1)
			return arr[top];
		else{
			return -1;
			}
	}	
		
};

int evaluatePostfix(string post)
{
	Stack s;
   for (int i = 0; i < post.length(); i++)
   {

       if (post[i] >= '0' && post[i] <= '9') {
           s.push(post[i] - '0');
       }

       else {

	    	int x = s.peek();
           s.pop();

           int y = s.peek();
           s.pop();


           if (post[i] == '+') {
               s.push(x + y);
           }
           else if (post[i] == '-') {
               s.push(x - y);
           }
           else if (post[i] == '*') {
               s.push(x * y);
           }
           else if (post[i] == '/') {
               s.push(x / y);
	        }
       }
   }


   return s.peek();
}

int evaluatePrefix(string pre){
	Stack s;
	
	for (int i=pre.length()-1;i>=0;--i )
   {

       if (pre[i] >= '0' && pre[i] <= '9') {
           s.push(pre[i] - '0');
       }

       else {

           int x = s.peek();
           s.pop();

           int y = s.peek();
           s.pop();


           if (pre[i] == '+') {
               s.push(x + y);
           }
           else if (pre[i] == '-') {
               s.push(x - y);
           }
           else if (pre[i] == '*') {
               s.push(x * y);
           }
           else if (pre[i] == '/') {
               s.push(x / y);
           }
       }
   }

return s.peek();
}


int main()
{
   string exp;
   char n;
   cout<<"Select 1 for postfix evaluation"<<endl;
   cout<<"Select 2 for prefix evaluation"<<endl;
   cin>>n;
   switch(n){
   	case '1':
   		cout<<"Enter postfix expression:";
   		cin>>exp;
   		cout << evaluatePostfix(exp);
   		break;
   	case '2':
   		cout<<"Enter prefix expression:";
   		cin>>exp;
   		cout << evaluatePrefix(exp);
   		break;
   	default:
   		cout<<"Enter correct input."<<endl;
   }
   return 0;
}

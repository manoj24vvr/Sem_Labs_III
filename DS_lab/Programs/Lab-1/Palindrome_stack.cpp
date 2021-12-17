#include<iostream>
using namespace std;

char arr[50];
int top = -1,front=0;
void push(char c){
	top++;
	arr[top] = c;
}
void pop(){
	top--;
}

int main(){
	string str = "AIROCKS";
	int n=0;
	char c;
	
	while(true){
		n=0;
		top=-1;
		front=0;
		
		for(int i=0;str[i]!='\0';i++){
			n++;
			c = str[i];
			push(c);
		}
				
		for(int i=0;i<n/2;i++){
					
			if(arr[top]==arr[front]){
				pop();
				front++;
						
			}else{
				cout<<"Given string is not a palindrome. "<<endl;
				break;
			}	
		}
				
		if(front==(n/2)){
			cout<<"Given string is a palindrome."<<endl;
			top=-1;
			front=0;
			break;
		}
				
	}
	
	
	
	return 0;
}



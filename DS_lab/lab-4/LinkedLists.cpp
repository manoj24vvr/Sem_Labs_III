#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
	int data;
	struct node *next;
};
int main(){
	
	struct node *head=NULL;
	int op,d;
	
	do{
		cout<<"\n1. Insert in beginning";
		cout<<"\n2. Insert at end";
		cout<<"\n3. Insert an element before another element";
		cout<<"\n4. Insert an element after another element";
		cout<<"\n5. Delete an element";
		cout<<"\n6. Print the list";
		cout<<"\n7. Exit";
		cout<<"\n Enter option :- ";
		cin>>op;
		
		switch(op){
			case 1 :{
				cout<<"Enter the element you want to input";
				cin>>d;
				struct node *newNode= new struct node;
				newNode->data=d;
				newNode->next=head;
				head=newNode;
				
			    system("pause>nul");
				break;
			}
			case 2:{
				cout<<"Enter the element you want to input";
				cin>>d;
				struct node *newNode= new struct node;
				newNode->data=d;
				newNode->next=NULL;
				
				struct node *temp=head;
				while(temp->next!=NULL){
					temp=temp->next;
				}
				temp->next=newNode;
				break;
			}
			
			case 3:{
				int b,pos=0;
				cout<<"Enter the element you want to input";
				cin>>d;
				cout<<"Enter the element before which you want to insert";
				cin>>b;
				struct node *newNode= new struct node;
				struct node *temp = head;
				struct node *ptr;
				ptr=head;
				
				newNode->data=d;
				
				while(ptr!=NULL){
					if(ptr->data==b){
						break;
					}else{
						ptr=ptr->next;
					    pos++;
					}
				
				}
				
				for(int i=0; i<pos-1; i++){
					if(temp->next!=NULL){
						temp = temp->next;
					}
				}
				newNode->next = temp->next;
				temp->next = newNode;
				
				system("pause>nul");
				break;
			}
			
			case 4:{
				int a,pos=0;
				cout<<"Enter the element you want to input";
				cin>>d;
				cout<<"Enter the element after which you want to insert";
				cin>>a;
				struct node *newNode= new struct node;
				struct node *temp = head;
				struct node *ptr;
				ptr=head;
				
				newNode->data=d;
				
				while(ptr!=NULL){
					if(ptr->data==a){
						break;
					}else{
						ptr=ptr->next;
					    pos++;
					}
				
				}
				
				for(int i=0; i<pos; i++){
					if(temp->next!=NULL){
						temp = temp->next;
					}
				}
				newNode->next = temp->next;
				temp->next = newNode;
				
				system("pause>nul");
				
				
				break;
			}
			
			case 5:{
				int d,pos=0;
				cout<<"Enter the element you want to delete";
				cin>>d;
				
				struct node *p = head;
				struct node *q = head->next;
				struct node *ptr = head;
				
				while(ptr->next!=NULL){
					if(ptr->data==d){
						break;
					}else{
						ptr=ptr->next;
						pos++;
						
					}
				}
				cout<<pos;
				for(int i=0; i<pos-1; i++){
					p=p->next;
					q=q->next;
					
				}
			
				p->next=q->next;
				delete q;
				system("pause>null");
				break;
			}
			case 6:{
				cout<<"Display :- ";
				
				struct node *ptr;
				ptr=head;
				while(ptr!=NULL){
					cout<<ptr->data;
					ptr=ptr->next;
				}
				system("pause>nul");
				break;
			}
			case 7 :{
				exit(0);
				break;
			}
				
		}
		 system("cls");
	}while(op!=7);
	
	return 0;
}

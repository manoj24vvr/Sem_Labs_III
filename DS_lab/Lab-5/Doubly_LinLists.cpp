#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
}*begin;

class dou_lin{
	public:
		void new_list(int value);
		void add_begin(int value);
		void add_at(int value, int pos);
		void add_before(int value, int pos);
		void add_after(int value, int pos);
		void delete_ele(int value);
		void search_ele(int value);
		void display();
		dou_lin(){
			begin = NULL;
		}
	
};


void dou_lin::new_list(int value)
{
    struct node *s, *temp;
    temp = new struct node; 
    temp->data = value;
    temp->next = NULL;
    if (begin == NULL)
    {
        temp->prev = NULL;
        begin = temp;
    }
    else
    {
        s = begin;
        while (s->next != NULL)
            s = s->next;
        s->next = temp;
        temp->prev = s;
    }
}
 

void dou_lin::add_begin(int value)
{
    if (begin == NULL)
    {
        cout<<"Need to create a list."<<endl;
        return;
    }
    struct node *temp;
    temp = new(struct node);
    temp->prev = NULL;
    temp->data = value;
    temp->next = begin;
    begin->prev = temp;
    begin = temp;
}
 

void dou_lin::add_at(int value, int pos)
{
    if (begin == NULL)
    {
        cout<<"Need to create a  list."<<endl;
        return;
    }
    struct node *temp, *q;
    int i;
    q = begin;
    for (i = 0;i < pos - 1;i++)
    {
        q = q->next;
        if (q == NULL)
        {
            cout<<"There is no element at the position "<<pos<<endl;
            return;
        }
    }
    temp = new struct node;
    temp->data = value;
    if (q->next == NULL)
    {
        q->next = temp;
        temp->next = NULL;
        temp->prev = q;      
    }
    else
    {
        temp->next = q->next;
        temp->next->prev = temp;
        q->next = temp;
        temp->prev = q;
    }
}
 

void dou_lin::delete_ele(int value)
{
    struct node *temp, *q;
     
    if (begin->data == value)
    {
        temp = begin;
        begin = begin->next;  
        begin->prev = NULL;
        free(temp);
        return;
    }
    q = begin;
    while (q->next->next != NULL)
    {   
       
        if (q->next->data == value)  
        {
            temp = q->next;
            q->next = temp->next;
            temp->next->prev = q;
            free(temp);
            return;
        }
        q = q->next;
    }
    
    if (q->next->data == value)    
    { 	
        temp = q->next;
        free(temp);
        q->next = NULL;
        return;
    }
    cout<<"Element "<<value<<" not found"<<endl;
}

void dou_lin::add_before(int value, int pos)
{
    if (begin == NULL)
    {
        cout<<"Need to create a  list."<<endl;
        return;
    }
    struct node *temp, *q;
    int i,before_pos = pos-1;
    q = begin;
    for (i = 0;i < before_pos - 1;i++)
    {
        q = q->next;
        if (q == NULL)
        {
            cout<<"There is no element at the position "<<pos<<endl;
            return;
        }
    }
    temp = new struct node;
    temp->data = value;
    if (q->next == NULL)
    {
        q->next = temp;
        temp->next = NULL;
        temp->prev = q;      
    }
    else
    {
        temp->next = q->next;
        temp->next->prev = temp;
        q->next = temp;
        temp->prev = q;
    }
}

void dou_lin::add_after(int value, int pos)
{
    if (begin == NULL)
    {
        cout<<"Need to create a  list."<<endl;
        return;
    }
    struct node *temp, *q;
    int i,after_pos = pos+1;
    q = begin;
    for (i = 0;i < after_pos - 1;i++)
    {
        q = q->next;
        if (q == NULL)
        {
            cout<<"There is no element at the position "<<pos<<endl;
            return;
        }
    }
    temp = new struct node;
    temp->data = value;
    if (q->next == NULL)
    {
        q->next = temp;
        temp->next = NULL;
        temp->prev = q;      
    }
    else
    {
        temp->next = q->next;
        temp->next->prev = temp;
        q->next = temp;
        temp->prev = q;
    }
}

void dou_lin::display()
{
    struct node *q;
    if (begin == NULL)
    {
        cout<<"List is empty,nothing to display"<<endl;
        return;
    }
    q = begin;
    cout<<"The Doubly Link List is :"<<endl;
    while (q != NULL)
    {
        cout<<q->data<<"  ";
        q = q->next;
    }
    
}


int main(){
	
	int opt,ele,pos;
	dou_lin d;
	
	cout<<"Select operation: \n";
	cout<<"1-Insert element in the rear end\n";
	cout<<"2-Insert in the beginning\n";
	cout<<"3-Insert at given position\n";
	cout<<"4-Delete an element from given position \n";
	cout<<"5-Insert element before given position\n";
	cout<<"6-Insert element after given position\n";
	cout<<"7-Display the list\n";
	cout<<"8-Quit"<<endl;
	
	while(true){
		cout<<"Enter your choice: ";
		cin>>opt;
		switch(opt){
			case 1:
				cout<<"Enter element: ";
				cin>>ele;
				d.new_list(ele);
				cout<<endl;
				break;
			case 2:
				cout<<"Enter the element: ";
				cin>>ele;
				d.add_begin(ele);
				cout<<endl;
				break;
			case 3:
				cout<<"Enter the element: ";
				cin>>ele;
				cout<<"Enter the position at which element to be inserted: ";
				cin>>pos;
				d.add_at(ele,pos);
				cout<<endl;
				break;
			case 4:
				if(begin == NULL){
					cout<<"List is Empty\n";
					break;
				}else{
					cout<<"Enter the element to be deleted: ";
					cin>>ele;
					d.delete_ele(ele);
					cout<<endl;
					break;
				}
			case 5:
				cout<<"Enter the element: ";
				cin>>ele;
				cout<<"Enter the position before which element to be inserted: ";
				cin>>pos;
				d.add_before(ele,pos);
				cout<<endl;
				break;
			
			case 6:
				cout<<"Enter the element: ";
				cin>>ele;
				cout<<"Enter the position after which element to be inserted: ";
				cin>>pos;
				d.add_after(ele,pos);
				cout<<endl;
				break;
			
			
			case 7:
				d.display();
				cout<<endl;
				break;
			case 8:
				exit(1);
			default:
				cout<<"---Invalid choice---";				
							
		}
	}
	return 0;
}

#include<iostream> 
using namespace std; 
struct BstNode { 
	int data; 
	BstNode* left; 
	BstNode* right; 
}; 

struct BstNode* GetNewNode(int data) { 
	BstNode* newNode = new BstNode(); 
	newNode->data=data;   
	newNode->left=NULL; 
	newNode->right=NULL; 
	return newNode; 
} 

BstNode* Insert(BstNode* root,int data) { 
	if(root==NULL) { 
		root=GetNewNode(data); 
	} 
	else if(data <=root->data) { 
		root->left=Insert(root->left,data); 
	} 
	else if(data >root->data) { 
		root->right=Insert(root->right,data); 
	} 
	return root; 
} 

void parent(BstNode* root,int data,int par) { 
	if(root==NULL) { 
		return; 
	} 
	if(root->data==data){
		cout<<par; 
	} 
	else  { 
		parent(root->left,data,root->data); 
		parent(root->right,data,root->data); 
	} 
} 

bool ancestor(BstNode* root,int target) { 
	if(root==NULL){ 
		return false; 
	} 
	if(root->data==target) { 
		return true; 
	} 
	if((ancestor(root->left,target)) || (ancestor(root->right,target))) { 
		cout<<root->data<<" "; 
		return true; 
	} 
	return false; 
} 

int DepthOrder(BstNode* root) {
	if(root==NULL) { 
		return 0; 
	} 
	int lDepth = DepthOrder(root->left); 
	int rDepth = DepthOrder(root->right); 
	if(lDepth>rDepth) {
		return lDepth+1;  
	} 
	else{ 
		return rDepth+1; 
	} 
} 

int main() { 
	BstNode* root; 
	root=NULL; 
	int rootval, op, value; 
	cout<<"Enter root element: "; 
	cin>>rootval; 
	root = Insert(root,rootval); 
	cout<<"Select-1 to insert a node"<<endl;
	cout<<"Select-2 to find parent of a node"<<endl;
	cout<<"Select-3 to find the depth of tree"<<endl;
	cout<<"Select-3 to find the ancestors of a node"<<endl;
	int choice; 
	do { 
		int num; 
		int d1,d2; 
		int pos;   
		cout<<endl<<"Enter choice: "; 
		cin>>choice; 
		
		switch(choice) { 
			case 1: 
				int pos; 
				cout<<"Enter element to insert: "; 
				cin>>num;  
				Insert(root,num); 
				break; 
			
			case 2: 
				cout<<"Enter element to find its Parent: "; 
				cin>>num; 
				parent(root,num,-1); 
				break; 
			
			case 3: 
				int order; 
				order=DepthOrder(root); 
				cout<<"Depth of tree is "<<order<<endl; 
				break; 
				
			case 4: 
				cout<<"Enter Element to find its Ancestors: "; 
				cin>>num; 
				ancestor(root,num); 
				break;  
			
			case 5: 
				exit(0); 
				break; 
		} 
	}while(choice!=5); 
} 

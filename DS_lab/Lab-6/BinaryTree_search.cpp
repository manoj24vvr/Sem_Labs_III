# include <iostream>
# include <cstdlib>
using namespace std;
int n=1;
struct nod 
{
   int info;
   struct nod *l;
   struct nod *r;
}*r;
struct node
{
    int data;
    node* left;
    node* right;
};
class BST
{
   public:
	   void search(nod *, int);
	   void insert(nod *, nod *);
	   void display(nod *, int);
	   BST()
	   {
	      r = NULL;
	   }
};

void BST::search(nod *root, int data)
{
   int depth = 0;
   nod *temp = new nod;
   temp = root;
   while(temp != NULL)
   {
      depth++;
      if(temp->info == data)
      {
         cout<<"\nData found at depth: "<<depth<<endl;
         return;
      }
      else if(temp->info > data)
      temp = temp->l;
      else
      temp = temp->r;
   }
   cout<<"\n Data not found"<<endl;
   return;
}
void BST::insert(nod *tree, nod *newnode)
{
   if (r == NULL)
   {
   		r = new nod;
	    r->info = newnode->info;
	    r->l= NULL;
	    r->r= NULL;
	    cout<<"Root Node is Added"<<endl;
	    return;
   }
   if (tree->info == newnode->info)
   {
    cout<<"Element already in the tree"<<endl;
    return;
   }
   if (tree->info > newnode->info)
   {
      if (tree->l != NULL)
		    {
		    	insert(tree->l, newnode);
		    }
      else
      {
        tree->l= newnode;
        (tree->l)->l = NULL;
        (tree->l)->r= NULL;
    	cout<<"Node Added To Left"<<endl;
        return;
      }
   }
   else
   {
      if (tree->r != NULL)
      {
         insert(tree->r, newnode);
      }
      else
      {
        tree->r = newnode;
        (tree->r)->l= NULL;
        (tree->r)->r = NULL;
        cout<<"Node Added To Right"<<endl;
        return;
      }
   }
}

void BST::display(nod *ptr, int level)
{
   int i;
   if (ptr != NULL)
   {
      	display(ptr->r, level+1);
      	cout<<endl;
      
    	for (i = 0;i < level;i++)
    	cout<<"  ";
      
      cout<<ptr->info;
      display(ptr->l, level+1);
   }
}


int main()
{
   int c, n,item;
   BST b;
   nod *t;
      cout<<"1-Insert Element "<<endl;
      cout<<"2-Search Element"<<endl;
      cout<<"3-Display the tree"<<endl;
      cout<<"4-Quit"<<endl;
   while (true)
   {
   	  int opt;
      cout<<"Enter your choice : ";
      cin>>opt;
      switch(opt)
      {
         case 1:
            t = new nod;
            cout<<"Enter the number to be inserted : ";
            cin>>t->info;
            b.insert(r, t);
            break;
         case 2:
            cout<<"Search:"<<endl;
            cin>>item;
            b.search(r,item);
            break;
         case 3:
            cout<<"Display BST:"<<endl;
            b.display(r,1);
            cout<<endl;
            break;
         case 4:
            exit(1);
         default:
            cout<<"Invalid choice"<<endl;
      }
   }
}

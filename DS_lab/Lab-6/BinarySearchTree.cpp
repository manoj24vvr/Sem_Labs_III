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
	   void insert(nod *, nod *);
	   void inorder(nod *);
	   void preorder(nod *);
	   void postorder(nod *);
	   int getLeafCount(nod* nod);
	   BST()
	   {
	      r = NULL;
	   }
};


void BST::insert(nod *tree, nod *newnode)
{
   if (r == NULL)
   {
      r = new nod;
      r->info = newnode->info;
      r->l= NULL;
      r->r= NULL;
      cout<<"Root Node is inserted"<<endl;
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
         cout<<"Node Added To Left\n"<<endl;
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
         cout<<"Node Added To Right\n"<<endl;
         return;
      }
   }
}


void BST::preorder(nod *ptr)
{
   if (r == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (ptr != NULL)
   {
      cout<<ptr->info<<" ";
      preorder(ptr->l);
      preorder(ptr->r);
   }
}
void BST::inorder(nod *ptr)
{
   if (r == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (ptr != NULL)
   {
      inorder(ptr->l);
      cout<<ptr->info<<" ";
      inorder(ptr->r);
   }
}
void BST::postorder(nod *ptr)
{
   if (r == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (ptr != NULL)
   {
      postorder(ptr->l);
      postorder(ptr->r);
      cout<<ptr->info<<" ";
   }
}

//void BST :: getLeafCount( nod* nod)
//{
////    int n;
////	if(nod == NULL){
////	    
////        n = 0;
////    }
////    if(nod->l != NULL){
////	
////        n = n+1;
////        
////    }
////	if(nod->r != NULL){
////	
////		n = n+1;
////		
////	}
////   cout<<n;
//	
//	if(nod == NULL)
//		cout<<"Tree is Empty\n";
//	if(nod->l == NULL && nod->r == NULL)
//		cout<<"Total Nodes : 1\n";
//	else
//		cout<<"Total Leaf Nodes: "<<getLeafCount(nod->l) + getLeafCount(nod->r);
//}

int BST:: getLeafCount(struct nod* nod)
{
	if(nod == NULL)
		return 0;
	if(nod->l == NULL && nod->r == NULL)
		return 1;
	else
		return getLeafCount(nod->l) + getLeafCount(nod->r);
}

int main()
{
   int c, n,item;
   BST bst;
   nod *t;
      cout<<"1-Insert Element "<<endl;
      cout<<"2-Inorder Traversal"<<endl;
      cout<<"3-Post order Traversal"<<endl;
      cout<<"4-Preorder Traversal"<<endl;
      cout<<"5-Count no. of leaf nodes"<<endl;
      cout<<"6-Quit"<<endl;
   while (1)
   {
   	  int c;
      cout<<"Enter your choice : ";
      cin>>c;
      switch(c)
      {
         case 1:
            t = new nod;
            cout<<"Enter the number to be inserted : ";
            cin>>t->info;
            bst.insert(r, t);
            break;
         
         case 2:
            cout<<"Inorder Traversal of BST: ";
            bst.inorder(r);
            cout<<endl;
            break;
         
         case 3:
            cout<<"Postorder Traversal of BST: ";
            bst.postorder(r);
            cout<<endl;
            break;
        case 4:
            cout<<"Preorder Traversal of BST: ";
            bst.preorder(r);
            cout<<endl;
         case 5:
            cout << "Leaf count of the tree is : "<<bst.getLeafCount(r) << endl;
			break;
         case 9:
            exit(1);
         default:
            cout<<"Invalid"<<endl;
      }
   }
}

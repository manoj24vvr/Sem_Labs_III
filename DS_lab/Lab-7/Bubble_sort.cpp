#include <iostream>
using namespace std;
int main()
{
	int hold,n;
	cout<<"Enter size of list: ";
	cin>>n;
 	int array[n];
 	cout<<"Enter elements of list:  "<<endl;
	for(int i=0; i<n; i++) 
	{
		cin>>array[i];
	}
	cout<<endl;
 
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++) 
			{
	   			if(array[j]>array[j+1])
	   				{
	    				hold=array[j];
	    				array[j]=array[j+1];
	    				array[j+1]=hold;
	   				}
	  		}
	}
 	cout<<"Sorted List is: "<<endl;
 	for(int i=0; i<n; i++){
  		cout<<array[i]<<"\t";
 	}
    return 0;
 }

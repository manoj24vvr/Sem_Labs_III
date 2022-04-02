#include <iostream>
using namespace std;
int main()
{
  int list[100];
  int i,ele,len;
  cout<<"Enter size of the list: ";
  cin>>len;

  cout<<"Enter elements of the list: ";
  for(i = 0; i < len; i++)
  cin>>list[i];

  cout<<"Enter the element to be searched: ";
  cin>>ele;
  
  for(i = 0; i < len; i++)
  {
     if(ele == list[i])
     {
        cout<<ele <<" is "<<(i+1)<<"th element in the list.";
        break;
     }
  }
  if(i == len)
     cout<<"Element is not found";
  
}

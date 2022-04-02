#include<iostream>
using namespace std;
int main()
{
	int arr[50],n;
	cout<<"Enter size of list: ";
	cin>>n;
	cout<<"Enter elements of list: ";
	for(int i=0;i<n;i++){
		cout<<"Element-"<<(i+1)<<": ";
		cin>>arr[i];
	}
    int min,temp;
	for (int i=0; i < n-1; i++)
    {
        min = i;    
        for (int j=i+1; j < n; j++)
        {
			if (arr[j] < arr[min])
            	min=j;
        }
                
        if (min != i)
        {
        	temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    cout<<"Sorted list : ";
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<"\t";
	}
}

#include<iostream>  
using namespace std;  
int main ()  
{    
    int n, arr[50];
	cout<<"Enter the size of list: ";
	cin>>n;
	cout<<"Enter elements of list: ";
	for(int i=0;i<n;i++){
		cout<<"Element-"<<(i+1)<<": ";
		cin>>arr[i];
	} 
    for(int i=1; i<n; i++)   
    {  
        int temp = arr[i];  
        int j= i-1;  
        while(j>=0 && temp <= arr[j])  
        {  
            arr[j+1] = arr[j];   
            j = j-1;  
        }  
        arr[j+1] = temp;  
    }  
    cout<<"Sorted list is: ";
    for(int i=0;i<10;i++)  
    {  
        cout <<arr[i]<<"\t";  
    }  
}

#include<iostream>
using namespace std;
int binary_Search(int arr[], int l, int r, int num) {
   if (l <= r) {
      int mid = (l + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binary_Search(arr, l, mid-1, num);
      if (arr[mid] < num)
         return binary_Search(arr, mid+1, r, num);
   }
   return -1;
}
int main(void) {
   int arr[50], n;
   int num;
   cout<<"Enter size of the list: ";
   cin>>n;
   for(int i=0;i<n;i++){
   	cout<<"Enter element-"<<(i+1)<<": ";
   	cin>>arr[i];
   }
   cout << "Enter the element to searched: \n";
   cin >> num;
   int index = binary_Search (arr, 0, n-1, num);
   if(index == -1){
      cout<< num <<" is not found in the list";
   }else{
      cout<< num <<" found at index "<< index <<" in the list.";
   }
   return 0;
}

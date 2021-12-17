#include <iostream>
using namespace std;

void tower_Of_Hanoi(int n, char source, char aux,char des)
{
	if (n == 1)
	{
		cout << "Move disk 1 from " << source <<" to " << des<<endl;
		return;
	}
	tower_Of_Hanoi(n - 1, source, des, aux);
	cout << "Move disk " << n << " from " << source <<" to " << des << endl;
	tower_Of_Hanoi(n - 1, aux, source, des);
}


int main()
{
	int n;
	cout<<"Enter the number of discs: ";
	cin>>n; 
	tower_Of_Hanoi(n, 'A', 'B', 'C'); 
	return 0;
}


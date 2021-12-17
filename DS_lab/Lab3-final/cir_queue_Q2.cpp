#include<iostream>
using namespace std;
int size = 5;
char queue[5][15];
int head = 0, tail = 0;
int elements = 0;

void enqueue(char str[15]) {
	if(elements == size) {
			cout << "Queue is full" << endl;
		return ;
	}
	int i;
	for(i = 0; str[i] != '\0'; i++){
		queue[tail][i] = str[i];
		queue[tail][i] = '\0';
		tail = (tail + 1) % size;
		elements++;
	}
}

void dequeue() {
	if(elements == 0) {
		cout << "Queue is empty" << endl;
	}
	else {
		cout << "Deleting an element: " << queue[head] << endl;
		head = (head + 1) % size;
		elements--;
	}	
}

void display() {
	if(elements == 0) {
		cout << "Queue is empty" << endl;
	}
	else {
		if(head < tail) {
			for(int i = head; i < tail; i++)
				cout << queue[i] << " ";
		}
		else {
			for(int i = head; i < size; i++)
				cout << queue[i] << " ";
			for(int i = 0; i < tail; i++)
				cout << queue[i] << " ";
		}
	}
	cout << endl;
}

int main() {
	int choice = 0;
	char str[15];
	cout << "1. Enqueue \t 2. Dequeue \t 3. Display \t 4. Exit" << endl;
	while(choice != 4) {
		cout << "Enter your choice of operation: ";
		cin >> choice;
		switch(choice) {
			case 1: cout << "Enter string to enqueue: ";
				cin >> str;
				enqueue(str);
				break;
			case 2: dequeue();
				break;
			case 3: cout << "The current string in queue : ";
				display();
				break;
			case 4: exit(0);
		}
	}
	return 0;
}

#include <iostream>
#include <string>

using namespace std;


class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}

	void push() {
		int element;
		cout << "Enter the element : " << endl;
		cin >> element;
		if (top == 4) {  //step 1
			cout << "Number of data exceed the limit" << endl;

			return;
		}

		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << "ditambahkan(pushhed)" << endl;

	}

	void pop() {
		if (empty()) {  //step 1
			cout << "\nStack is empty. Cannot pop." << endl; //step 1.a
			return; //step1.b
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl; //step 2
		top--;  //step 3 decrement
	}

	//methode for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};


int main() {
	StackArray obj;
	char ch;
	while (true) {
		cout << "\nMenu" << endl;
		cout << "1. push a element " << endl;
		cout << "2. pop element" << endl;
		cout << "3. display " << endl;
		cout << "4. Exit" << endl;
		cout << "\nEnter your choice (1-4): ";
		cin >> ch;

		switch (ch) {
		case '1': {
			obj.push();
			break;
		}
		case '2': {
			obj.pop();
			break;
		}
		case '3': {
			obj.display();
			break;
		}
		case '4': {
			return 0;
		}
		default: {
			cout << "Invalid option" << endl;
			break;
		}
		}
	}
}; 
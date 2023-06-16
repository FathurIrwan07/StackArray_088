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



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

	

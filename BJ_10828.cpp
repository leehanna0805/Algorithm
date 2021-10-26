#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Stack {
public:
	vector<int> arr;

	void push(int num) { arr.push_back(num); }
	void pop() {
		if (arr.size() < 1) { cout << "-1" << endl; }
		else {
			cout << arr.back() << endl;
			arr.pop_back();
		}
	}
	void size() { cout << arr.size() <<endl; }
	void empty() {
		if (arr.size() > 0) { cout << "0" << endl; }
		else { cout << "1" << endl; }
	}
	void top() {
		if (arr.size() < 1) { cout << "-1" << endl; }
		else { cout << arr.back()<<endl; }
	}
};

int main() {
	Stack stack;
	int test;
	cin >> test;
	string input,k,remainder;
	getline(cin, remainder);

	for (int i = 0; i < test; i++) {
		getline(cin, input);
		stringstream ss(input);

		while (ss >> k) {
			if (k == "push") {
				ss >> k;
				stack.push(stoi(k));
			}
			else if (k == "size") {stack.size();}
			else if (k == "pop") {stack.pop();}
			else if (k == "empty") {stack.empty();}
			else if (k == "top") {stack.top();}
		}
	}
}

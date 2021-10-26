#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Stack {
public:
	vector<int> arr;

	void push(int num) { arr.push_back(num); }
	int pop() {
		if (arr.size() < 1) { return -1; }
		else {
			arr.pop_back();
			return 1;
		}
	}
	int size() { return arr.size(); }
	void flush() {
		arr.clear();
	}
};
int main() {
	Stack stack;
	int test, flag=1;
	cin >> test;
	string input,remainder;
	getline(cin, remainder);

	for (int i = 0; i < test; i++) {
		getline(cin,input);
		for (int j = 0; j < input.length(); j++) {
			if (input.at(j) == '(') {stack.push(1);}
			else if (input.at(j) == ')') {
				if (stack.pop() == -1) {
					flag = -1; break;
				}
			}
		}

		if (stack.size() != 0) {flag = -1;}

		if (flag == -1) { cout << "NO" << endl; }
		else { cout << "YES" << endl; }
		flag = 1;
		stack.flush();
	}
}

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Queue {
public:
	vector<int> arr;
	void push(int x) {
		arr.push_back(x);
	}
	void pop() {
		if (arr.empty()) { cout << -1 << endl; return; }
		cout << arr.front() << endl;
		arr.erase(arr.begin());
	}
	void size() {
		cout << arr.size() << endl;
	}
	void empty() {
		cout << arr.empty() << endl;
	}
	void front() {
		if (arr.empty()) { cout << -1 << endl; return; }
		cout << arr.front() << endl;
	}
	void back() {
		if (arr.empty()) { cout << -1 << endl; return; }
		cout << arr.back() << endl;
	}
};
int main() {
	Queue q;
	int test;
	cin >> test;
	string input, k, remainder;
	getline(cin, remainder);

	for (int i = 0; i < test; i++) {
		getline(cin, input);
		stringstream ss(input);
		while (ss >> k) {
			if (k == "push") {
				ss >> k;
				q.push(stoi(k));
			}
			else if (k == "pop") {q.pop();}
			else if (k == "size") { q.size(); }
			else if (k == "empty") { q.empty(); }
			else if (k == "front") { q.front(); }
			else if (k == "back") { q.back(); }
		}

	}
}
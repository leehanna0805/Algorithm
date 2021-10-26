#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Deque {
public:
	vector<int> arr;
	void push_front(int x) { arr.insert(arr.begin(),x); }
	void push_back(int x) {arr.push_back(x);}
	void pop_front() {
		if (arr.empty()) { cout << -1 << endl; return; }
		cout << arr.front() << endl;
		arr.erase(arr.begin());
	}
	void pop_back() {
		if (arr.empty()) { cout << -1 << endl; return; }
		cout << arr.back() << endl;
		arr.pop_back();
	}
	void size() {cout << arr.size() << endl;}
	void empty() {cout << arr.empty() << endl;}
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
	Deque dq;
	int test;
	cin >> test;
	string input, k, remainder;
	getline(cin, remainder);

	for (int i = 0; i < test; i++) {
		getline(cin, input);
		stringstream ss(input);
		while (ss >> k) {
			if (k == "push_front") {
				ss >> k;
				dq.push_front(stoi(k));
			}
			else if (k == "push_back") {
				ss >> k;
				dq.push_back(stoi(k));
			}
			else if (k == "pop_front") {dq.pop_front();}
			else if (k == "pop_back") { dq.pop_back(); }
			else if (k == "size") { dq.size(); }
			else if (k == "empty") { dq.empty(); }
			else if (k == "front") { dq.front(); }
			else if (k == "back") { dq.back(); }
		}

	}
}
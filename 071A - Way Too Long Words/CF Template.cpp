//https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<string> arr(n);

	for (auto &x : arr)
		cin >> x;

	for (auto &x : arr) {
		if (x.length() > 10)
			cout << x.front() << x.length() - 2 << x.back() << endl;
		else
			cout << x << endl;
	}

	return 0;
}
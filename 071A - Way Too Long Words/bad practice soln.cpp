//https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
using namespace std;

int main() {

	int n;
	cin >> n;
	string arr[n];
	string t;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		t = arr[i];
		if (t.length() > 10)
			t = t[0] + to_string(t.length() - 2) + t[t.length() - 1];
		cout << t << endl;
	}

	return 0;
}
#include<iostream>
using namespace std;

int main() {
	string a;
	cin >> a;
	for (int i = 0; i <= a.length() / 2; i++) {
		if (a[i] != a[a.length() - i - 1]) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}
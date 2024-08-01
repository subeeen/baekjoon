#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	for (int i = (n - 1); i >= 0; i--) {

		for (int a = 0; a < i; a++) {
			cout << " ";
		}

		for (int b = 0; b < (n - i); b++) {
			cout << "*";
		}

		cout << "\n";
	}
}
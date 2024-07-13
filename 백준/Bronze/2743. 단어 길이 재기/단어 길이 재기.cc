#include <iostream>
using namespace std;

int main() {
	string a;
	int num=0;
	cin >> a;
	for (int i=0; i < a.length(); i++) {
		num++;
	}
	cout << num;
}
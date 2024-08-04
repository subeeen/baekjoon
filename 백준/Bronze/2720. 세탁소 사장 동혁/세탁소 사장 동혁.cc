#include<iostream>
using namespace std;
int main() {
	int q, d, n, p, t, c;
	//q=25
	//d=10
	//n=5
	//p=1
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> c;
		q = c / 25;
		d = c % 25 / 10;
		n = c % 25 % 10 / 5;
		p = c % 25 % 10 % 5;
		cout << q<< " " << d << " "<<
			n << " "<<p << "\n";
	}
	return 0;
}
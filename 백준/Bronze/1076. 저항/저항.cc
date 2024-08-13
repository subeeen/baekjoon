#include <iostream>
#include<cmath>
using namespace std;
int main() {
	string s;
	long long int n;
	long long int total=0;
	for (int i = 0; i < 3; i++) {
		cin >> s;
		if (s == "black") n = 0;
		else if (s == "brown") n = 1;
		else if (s == "red") n = 2;
		else if (s == "orange")n = 3;
		else if (s == "yellow")n = 4;
		else if (s == "green") n = 5;
		else if (s == "blue") n = 6;
		else if (s == "violet")n = 7;
		else if (s == "grey") n = 8;
		else n = 9;

		if (i == 0) total += (10 * n);
		else if (i == 1) total += n;
		else  total *= pow(10,n);
	}
	cout << total;
}
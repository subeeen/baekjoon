#include<iostream>
using namespace std;
int main() {
	int v, a, b;
	int count = 0;

	cin >> a >> b >> v;

	if ((v - a) % (a - b) == 0) count = (v - a) / (a - b);
	else count = (v - a) / (a - b) + 1;

	cout << count + 1;
	return 0;
}
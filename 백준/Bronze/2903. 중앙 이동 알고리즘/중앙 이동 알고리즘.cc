#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	int result;
	cin >> n;
	result = (pow(2, (n - 1))+1 + pow(2, n - 1)) *
		(pow(2, (n - 1))+1 + pow(2, n - 1));

	cout << result;
}
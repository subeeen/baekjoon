#include<iostream>
using namespace std;
int main() {
	int n,t,p;
	int shirt[7];
	int tshirt = 0;
	cin >> n;
	for (int i = 1; i <= 6; i++) {
		cin >> shirt[i];
	}
	cin >> t >> p;
	for (int i = 1; i <= 6; i++) {
		if (shirt[i] % t == 0) tshirt += (shirt[i] / t);
		else tshirt += (shirt[i] / t + 1);
	}
	cout << tshirt<<"\n";
	cout << n / p << " " << n % p;
	return 0;
}
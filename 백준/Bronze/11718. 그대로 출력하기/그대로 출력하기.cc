#include <iostream>
#include<string>
using namespace std;
int main() {
	string s;
	for (int i = 0; i < 100; i++) {
		getline(cin, s);
		cout << s<<"\n";
	}
	return 0;
}
#include<iostream>
#include<stack>
using namespace std;
int main() {
	ios::sync_with_stdio(false); //성능 향상
	cin.tie(nullptr); // cin과 cout을 독립적으로 사용

	stack<int> s;
	int n, x;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "1") {
			cin >> x;
			s.push(x);
		}

		else if (str == "2") {
			if (!s.empty()) {
				cout << s.top() << "\n";
				s.pop();
			}

			else cout << "-1" << "\n";
		}


		else if (str == "3") cout << s.size() << "\n";

		else if (str == "4") {
			if (s.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
		else if (str == "5") {
			if (!s.empty()) {
				cout << s.top() << "\n";
			}
			else cout << "-1" << "\n";
		}
	}
}
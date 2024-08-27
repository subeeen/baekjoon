#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;
	string str;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> x;
			s.push(x);
			continue;
		}
		else if (str == "pop") {
			if (s.size() != 0) {
				cout << s.top()<<"\n";
				s.pop();
			}
			else cout << "-1\n";
			continue;
		}
		else if (str == "size") {
			cout << s.size()<<"\n";
			continue;
		}
		else if (str == "empty") {
			if (s.size() != 0) cout << "0\n";
			else cout << "1\n";
			continue;
		}
		else {
			if (s.size() != 0) cout << s.top()<<"\n";
			else cout << "-1\n";
			continue;
		}
	}
	return 0;
}
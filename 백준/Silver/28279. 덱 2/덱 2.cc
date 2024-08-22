#include<iostream>
#include<deque>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	deque <int> dq;
	int n;
	int x;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "1") {
			cin >> x;
			dq.push_front(x);
			continue;
		}
		else if (s == "2") {
			cin >> x;
			dq.push_back(x);
			continue;
		}
		else if (s == "3") {
			if (dq.size() != 0) {
				cout << dq.front()<<"\n";
				dq.pop_front();
			}
			else cout << "-1\n";
			continue;
		}
		else if (s == "4") {
			if (dq.size() != 0) {
				cout << dq.back()<<"\n";
				dq.pop_back();
			}
			else cout << "-1\n";
			continue;
		}
		else if (s == "5") {
			cout << dq.size()<<"\n";
			continue;
		}
		else if (s == "6") {
			if (dq.size() != 0) cout << "0\n";
			else cout << "1\n";
			continue;
		}
		else if (s == "7") {
			if (dq.size() != 0) cout << dq.front()<<"\n";
			else cout << "-1\n";
			continue;
		}
		else {
			if (dq.size() != 0) cout << dq.back()<<"\n";
			else cout << "-1\n";
			continue;
		}
	}
	return 0;
}
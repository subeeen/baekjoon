#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int>dq;
	int n;
	int x;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push_front") {
			cin >> x;
			dq.push_front(x);
			continue;
		}
		else if (s == "push_back") {
			cin >> x;
			dq.push_back(x);
			continue;
		}
		else if (s == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front()<<"\n";
				dq.pop_front();
			}
			else cout << "-1\n";
			continue;
		}
		else if (s == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else cout << "-1\n";
			continue;
		}
		else if (s == "size") {
			cout<<dq.size()<<"\n";
			continue;
		}
		else if (s == "empty") {
			if (!dq.empty()) cout << "0\n";
			else cout << "1\n";
			continue;
		}
		else if (s == "front") {
			if (!dq.empty()) cout << dq.front()<<"\n";
			else cout << "-1\n";
			continue;
		}
		else {
			if (!dq.empty()) cout << dq.back()<<"\n";
			else cout << "-1\n";
			continue;
		}
	}
	return 0;
}
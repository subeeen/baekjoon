#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int>q;
	int n;
	int x;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push") {
			cin >> x;
			q.push(x);
			continue;
		}
		else if (s == "pop") {
			if (!q.empty()) {
				cout << q.front()<<"\n";
				q.pop();
			}
			else cout << "-1\n";
			continue;
		}
		else if (s == "size") {
			cout<<q.size()<<"\n";
			continue;
		}
		else if (s == "empty") {
			if (!q.empty()) cout << "0\n";
			else cout << "1\n";
			continue;
		}
		else if (s == "front") {
			if (!q.empty()) cout << q.front()<<"\n";
			else cout << "-1\n";
			continue;
		}
		else {
			if (!q.empty()) cout << q.back()<<"\n";
			else cout << "-1\n";
			continue;
		}
	}
	return 0;
}
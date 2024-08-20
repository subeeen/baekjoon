#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	queue<int> q;
	int n;
	string s;
	int x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push") {
			cin >> x;
			q.push(x);
			continue;
		}
		else if (s == "pop") {
			if (q.size() == 0) cout << "-1\n";
			else {
				cout<<q.front()<<"\n";
				q.pop();
			}
			continue;
		}
		else if (s == "size") {
			cout << q.size() << "\n";
			continue;
		}
		else if (s == "empty") {
			if (q.size() == 0) cout << "1\n";
			else cout << "0\n";
			continue;
		}
		else if (s == "front") {
			if (q.size() == 0) cout << "-1\n";
			else cout<<q.front()<<"\n";
			continue;
		}
		else {
			if (q.size() == 0) cout << "-1\n";
			else cout<<q.back()<<"\n"; 
			continue;
		}
	}
	return 0;
}
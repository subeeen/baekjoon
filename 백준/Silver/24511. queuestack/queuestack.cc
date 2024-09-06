#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	queue <long long int> q;
	int n, m;
	int num;

	cin >> n;
	vector <int> d1(n),d2(n);
	for (int i = 0; i < n; i++) {
		cin >> d1[i];
	}
	// 0 1 1 0 을 d1에 입력

	for (int i = 0; i < n; i++) {
		cin >> d2[i];
	} // 1 2 3 4 를 d2에 입력

	for (int i = n - 1; i >= 0; i--) {
		if (d1[i] == 0) q.push((d2[i])); // 0이면 q에 넣기
	}

	cin >> m;
	// m 입력받음
	vector <long long int> d3(m);

	for (int i = 0; i < m; i++) {
		cin >> d3[i];
		q.push(d3[i]);
	} // 2 4 7 을 d3에 입력후 q 에 넣기


	for (int i = 0; i < m; i++) {
		cout << q.front() << " ";
		q.pop();
	}

	return 0;
}
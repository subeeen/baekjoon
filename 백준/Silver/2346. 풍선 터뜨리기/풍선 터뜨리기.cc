#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, steps, num;
	deque <pair<int, int>> dq;
	vector <int> result;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		dq.push_back({ i,num });
		//풍선 번호, 값을 deque에 넣음
	}
	
	while (!dq.empty()) {
		auto current = dq.front();
		dq.pop_front();
		result.push_back(current.first);
		//맨 앞의 풍선번호를 result에 넣음

		steps = current.second;
		//값을 steps 에 넣음
		if (dq.empty()) break;

		if (steps > 0) {
			for (int i = 1; i < steps; i++) {
				//steps-1 만큼 이동시킴
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			for (int i = 0; i < -steps; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
		if (i != result.size() - 1) cout << " ";
	}
	return 0;
}
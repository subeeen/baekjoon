#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	deque <int> dq;
	vector <int> result;

	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	} // 1 2 3 4 5 6 7 들어감

	while (!dq.empty()) {
		//앞에서부터 k까지 뒤로 옮기기
		for (int i = 1; i < k; i++) {
			dq.push_back(dq.front());
			dq.pop_front();
		}
		//k번째 수를 제거
		result.push_back(dq.front());
		dq.pop_front();
	}
	//결과 출력
	cout << "<";
	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
		if (i != result.size() - 1) cout << ", ";
	}
	cout << ">";
	return 0;
}
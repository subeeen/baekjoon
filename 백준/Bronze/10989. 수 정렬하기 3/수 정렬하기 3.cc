#include<iostream>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int num;
	int count[10001] = { 0 };
	cin >> n;
	//나온 숫자 인덱스의 배열 값 증가
	for (int i = 0; i < n; i++) {
		cin >> num;
		count[num]++;
	}
	
	//count[i]의 배열값 만큼 인덱스 출력
	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < count[i];j++) {
			cout<<i<<"\n";
			
		}
	}
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	//개념 모르니까 .. 노가다로 해야지 뭐..
	//넌 딱 기다려라 공부하고 다른 방법으로 다시 풀어준다
	int a, b, c, d, e, f, g, h;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	if (a == 1 && b == 2 && c == 3 && d == 4 && e == 5 && f == 6 && g == 7 && h == 8) cout << "ascending";
	else if (a == 8 && b == 7 && c == 6 && d == 5 && e == 4 && f == 3 && g == 2 && h == 1) cout << "descending";
	else cout << "mixed";
	return 0;
}
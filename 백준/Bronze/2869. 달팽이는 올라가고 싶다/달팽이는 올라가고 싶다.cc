#include<iostream>
using namespace std;
int main() {
	int v, a, b;
	int count = 0;

	cin >> a >> b >> v;

	if ((v - a) % (a - b) == 0) count = (v - a) / (a - b);
	else count = (v - a) / (a - b) + 1;
	//v-a : 전체막대-낮에올라가는길이
	//a-b : 낮에 올라가고 밤에 다시 내려가는 (하루동안의 길이)
	//(v-a)/(a-b)하면 올라가는 날짜수가 됨

	cout << count+1;
	return 0;
}
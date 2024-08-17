#include <iostream>
#include <cmath>
using namespace std;
int main() {

    //처음에는 닫혀있고
    //홀수번 진행시 열려있음
    //i명이 있다면
    //i의 약수만큼 열고닫기를 반복함
    //i의 약수 개수가 홀수이려면 
    //i는 완전제곱수여야함
    //n까지의 완전제곱수 개수를 구하면 됨

    long long int n;
    long long int result;
    cin >> n;
    result = (long long int) sqrt(n);
    cout << result;
    return 0;
}
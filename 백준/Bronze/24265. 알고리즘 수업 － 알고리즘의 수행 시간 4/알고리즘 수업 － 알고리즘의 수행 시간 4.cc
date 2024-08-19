#include<iostream>
using namespace std;
int main() {
    /*MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 1
        for j <- i + 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
    }*/

    //int MenOfPassion(const std::vector<int>&A, int n) {
    //    int sum = 0;
    //    for (int i = 0; i < n - 1; ++i) {           // i는 0부터 n-2까지
    //        for (int j = i + 1; j < n; ++j) {        // j는 i+1부터 n-1까지
    //            sum += A[i] * A[j]; // 코드1
    // //1~n-1 / 2~n-1 / 3~n-1 / 4~n-1 / ... /n-1
    //        }
    //    }
    //    return sum;
    //}
    
    //시간복잡도
    // n-1 부터 1까지의 합
    //시그마 공식 -> (n-1)(n)(1/2)

    long long int n;
    cin >> n;
    cout << n * (n-1)/2 << "\n" << 2;
    return 0;
}
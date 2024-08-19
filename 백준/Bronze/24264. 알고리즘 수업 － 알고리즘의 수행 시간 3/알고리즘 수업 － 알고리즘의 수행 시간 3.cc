#include<iostream>
using namespace std;
int main() {
    /*MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
    }*/
    //int MenOfPassion(const std::vector<int>&A, int n) {
    //    int sum = 0;
    //    for (int i = 0; i < n; ++i) {
    //        for (int j = 0; j < n; ++j) {
    //            sum += A[i] * A[j]; // 코드1
    //        }
    //    }
    //    return sum;
    //}
    //시간복잡도 : i루프 n j루프 n 
    //n^2
    long long int n;
    cin >> n;
    cout << n * n << "\n" << 2;
    return 0;
}
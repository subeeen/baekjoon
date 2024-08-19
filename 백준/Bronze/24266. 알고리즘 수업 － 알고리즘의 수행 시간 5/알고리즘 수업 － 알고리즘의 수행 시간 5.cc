#include<iostream>
using namespace std;
int main() {
    /*MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            for k <- 1 to n
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
    }*/

    //int MenOfPassion(const std::vector<int>&A, int n) {
    //    int sum = 0;
    //    for (int i = 0; i < n; ++i) {               // i는 0부터 n-1까지
    //        for (int j = 0; j < n; ++j) {           // j는 0부터 n-1까지
    //            for (int k = 0; k < n; ++k) {       // k는 0부터 n-1까지
    //                sum += A[i] * A[j] * A[k];      
    //            }
    //        }
    //    }
    //    return sum;
    //}

    long long int n;
    cin >> n;
    cout << n*n*n << "\n" <<3;
    return 0;
}
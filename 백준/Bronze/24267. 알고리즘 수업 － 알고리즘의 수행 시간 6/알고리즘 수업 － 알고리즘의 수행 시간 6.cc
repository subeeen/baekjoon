#include<iostream>
using namespace std;
int main() {
    /*
    MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 2
        for j <- i + 1 to n - 1
            for k <- j + 1 to n
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
    }*/

    /* i는 1~n-2 , j는 i+1부터 n-1, k는 j+1부터 n
       만약 n이 5면
       1 -> 2 -> 3,4,5
         -> 3 -> 4,5
         -> 4 -> 5
       
       2 -> 3 -> 4,5
         -> 4 -> 5

       (3+2+1) + (2+1) + (1)

       -> 
       (n*(n-2)*(n-1))/6
    */

    long long int n;
    cin >> n;
    cout << (n * (n - 2) * (n - 1)) / 6 << "\n" <<3;
    return 0;
}
// Viết Bằng C++
// Bài 191: Viết thuật toán sinh số Fibonacci với độ phức tạp O(log n).

#include <iostream>
#include <vector>
using namespace std;

void multiplyMatrix(vector<vector<long long>> &a, vector<vector<long long>> &b) { // a = a * b (2x2 matrix) 
    vector<vector<long long>> result(2, vector<long long>(2));
    result[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    result[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    result[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    result[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    a = result;
}

void powerMatrix(vector<vector<long long>> &matrix, int n) {
    vector<vector<long long>> base = {{1, 1}, {1, 0}};
    while (n > 0) {
        if (n % 2 == 1) multiplyMatrix(matrix, base);
        multiplyMatrix(base, base);
        n /= 2;
    }
}

long long fibonacci(int n) {
    if (n <= 1) return n;
    vector<vector<long long>> matrix = {{1, 1}, {1, 0}};
    powerMatrix(matrix, n - 1);
    return matrix[0][0];
}

int main() {
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}


// VIẾT BẰNG C++
// Tính tổng các số từ 1 đến n

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    int n, tong = 0;

    // Nhập một số từ bàn phím
    cout << "Nhập một số n: ";
    cin >> n;

    // Tính tổng từ 1 đến n
    for (int i = 1; i <= n; i++) {
        tong += i;
    }

    // In kết quả
    cout << "Tổng các số từ 1 đến " << n << " là: " << tong << endl;

    return 0;
}

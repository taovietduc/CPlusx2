// VIẾT BĂNG C++
// Kiểm tra một số nhập từ bàn phím là số chẵn hay số lẻ.

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến số nguyên
    int a;

    // Nhập số từ người dùng
    cout << "Nhập một số: ";
    cin >> a;

    // Kiểm tra chẵn hay lẻ
    if (a % 2 == 0) {
        cout << "Số " << a << " là số chẵn." << endl;
    } else {
        cout << "Số " << a << " là số lẻ." << endl;
    }

    return 0;
}


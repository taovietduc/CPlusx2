// VIẾT BẰNG C++
// Tính bình phương của một số: Nhập một số từ bàn phím và in ra bình phương của số đó.

#include <iostream>
using namespace std;

int main() {
    // Khai báo một biến
    float a;

    // Nhập một số từ bàn phím
    cout << "Nhập một số: ";
    cin >> a;

    // Tính bình phương của số
    float squared_a = a * a;

    // In kết quả
    cout << "Bình phương của số là: " << squared_a << endl;

    return 0;
}

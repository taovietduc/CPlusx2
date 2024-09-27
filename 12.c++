// VIẾT BẰNG C++
// Chuyển đổi nhiệt độ từ độ Celsius sang độ Fahrenheit

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    float C, F;

    // Nhập nhiệt độ từ bàn phím
    cout << "Nhập nhiệt độ (°C): ";
    cin >> C;

    // Công thức chuyển đổi Celsius sang Fahrenheit
    F = (C * 9.0 / 5.0) + 32;

    // In kết quả
    cout << "Nhiệt độ " << C << "°C = " << F << "°F" << endl;

    return 0;
}

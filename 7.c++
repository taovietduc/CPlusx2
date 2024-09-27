// VIẾT BẰNG C++
// Tính diện tích hình chữ nhật: Nhập chiều dài và chiều rộng và in ra chu vi, diện tích của hình chữ nhật.

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    float a, b;

    // Nhập chiều dài và chiều rộng từ bàn phím
    cout << "Nhập chiều dài a: ";
    cin >> a;
    cout << "Nhập chiều rộng b: ";
    cin >> b;

    // Kiểm tra điều kiện chiều dài và chiều rộng phải lớn hơn 0
    if (a > 0 && b > 0) {
        // Tính chu vi hình chữ nhật
        float C = (a + b) * 2;
        // Tính diện tích hình chữ nhật
        float S = a * b;
        // In kết quả
        cout << "Chu vi của hình chữ nhật là: " << C << endl;
        cout << "Diện tích của hình chữ nhật là: " << S << endl;
    } else {
        cout << "Chiều dài và chiều rộng phải lớn hơn 0." << endl;
    }

    return 0;
}
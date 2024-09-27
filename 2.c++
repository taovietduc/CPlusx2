// VIẾT BẰNG C++
// Tính thương hai số: Nhập hai số và in ra thương của chúng.

#include <iostream>
using namespace std;

int main() {
    // Khai báo hai biến
    float a, b;

    // Nhập hai số từ bàn phím
    cout << "Nhập a: ";
    cin >> a;
    cout << "Nhập b: ";
    cin >> b;

    // Kiểm tra nếu b khác 0
    if (b != 0) {
        // Tính thương của hai số
        float T = a / b;
        // In kết quả
        cout << "Thương của hai số là: " << T << endl;
    } else {
        cout << "Không thể chia cho 0." << endl;
    }

    return 0;
}

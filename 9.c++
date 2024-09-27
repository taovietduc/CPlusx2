// VIẾT BĂNG C++
// Tính diện tích hình tam giác

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến chiều cao và đáy
    float h, d;

    // Nhập chiều cao và đáy từ bàn phím
    cout << "Nhập chiều cao của hình tam giác: ";
    cin >> h;
    cout << "Nhập độ dài đáy của hình tam giác: ";
    cin >> d;

    // Kiểm tra điều kiện chiều cao và đáy > 0
    if (h > 0 && d > 0) {
        // Tính diện tích hình tam giác
        float S = 0.5 * d * h;
        // In kết quả
        cout << "Diện tích của hình tam giác là: " << S << endl;
    } else {
        cout << "Chiều cao và đáy phải lớn hơn 0." << endl;
    }

    return 0;
}

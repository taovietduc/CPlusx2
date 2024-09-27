// VIẾT BẰNG C++
// Tìm số nhỏ nhất trong ba số

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến
    float a, b, c;

    // Nhập ba số từ bàn phím
    cout << "Nhập số thứ nhất: ";
    cin >> a;
    cout << "Nhập số thứ hai: ";
    cin >> b;
    cout << "Nhập số thứ ba: ";
    cin >> c;

    // Tìm số nhỏ nhất
    float so_nho_nhat;

    if (a <= b && a <= c) {
        so_nho_nhat = a;
    } else if (b <= a && b <= c) {
        so_nho_nhat = b;
    } else {
        so_nho_nhat = c;
    }

    // In kết quả
    cout << "Số nhỏ nhất là: " << so_nho_nhat << endl;

    return 0;
}

// VIẾT BẰNG C++
// Tìm số nhỏ nhất trong ba số (Cách 2)

#include <iostream>
using namespace std;

int main() {
    // Khai báo một mảng
    float list[3];

    // Nhập ba số từ ban phím
    for (int i = 0; i < 3; i++) {
        cout << "Nhập số thứ " << i + 1 << ": ";
        cin >> list[i];
    }

    // Tìm số nhỏ nhất
    float so_nho_nhat = list[0];
    for (int i = 1; i < 3; i++) {
        if (list[i] < so_nho_nhat) {
            so_nho_nhat = list[i];
        }
    }

    // In kết quả
    cout << "Số nhỏ nhất là: " << so_nho_nhat << endl;

    return 0;
}
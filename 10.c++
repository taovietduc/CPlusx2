// VIẾT BĂNG C++
// Tìm số lớn nhất trong ba số

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

    // Tìm số lớn nhất
    float so_lon_nhat;

    if (a >= b && a >= c) {
        so_lon_nhat = a;
    } else if (b >= a && b >= c) {
        so_lon_nhat = b;
    } else {
        so_lon_nhat = c;
    }

    // In kết quả
    cout << "Số lớn nhất là: " << so_lon_nhat << endl;

    return 0;
}

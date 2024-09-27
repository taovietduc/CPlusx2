// VIẾT BẰNG C++
// Tính số lượng ký tự 'a' trong chuỗi: Nhập một chuỗi và đếm số lượng ký tự 'a'

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Nhập chuỗi từ bàn phím
    string chuoi;
    cout << "Nhập một chuỗi: ";
    getline(cin, chuoi);

    // Đếm số lượng ký tự 'a' trong chuỗi
    int so_luong_a = 0; // Biến đếm số lượng ký tự 'a'
    for (char ky_tu : chuoi) { // Duyệt từng ký tự trong chuỗi
        if (ky_tu == 'a') { // Nếu ký tự là 'a'
            so_luong_a++; // Tăng biến đếm lên 1
        }
    }

    // In kết quả
    cout << "Số lượng ký tự 'a' trong chuỗi là: " << so_luong_a << endl;

    return 0;
}

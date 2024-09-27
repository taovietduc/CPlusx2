// VIẾT BẰNG C++
// Tính số lượng chữ cái trong chuỗi: Nhập một chuỗi và đếm số lượng chữ cái trong chuỗi.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Nhập chuỗi từ bàn phím
    string chuoi;
    cout << "Nhập một chuỗi: ";
    getline(cin, chuoi); // Sử dụng getline để nhập chuỗi có chứa khoảng trắng

    // Đếm số lượng chữ cái trong chuỗi
    int so_luong_chu_cai = 0;
    for (char ky_tu : chuoi) {
        if (isalpha(ky_tu)) {  // Kiểm tra nếu ký tự là chữ cái
            so_luong_chu_cai++; // Tăng biến đếm lên 1
        }
    }

    // In kết quả
    cout << "Số lượng chữ cái trong chuỗi là: " << so_luong_chu_cai << endl;

    return 0;
}

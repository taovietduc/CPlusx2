// VIẾT BẰNG C++
// Bài 95: Tạo hàm tính tổng các chữ số trong một số.

#include <iostream>
using namespace std;

// Hàm tính tổng các chữ số trong một số
int tinh_tong_chu_so(int n)  // n là số cần tính tổng các chữ số
{
    int tong = 0; // Khởi tạo biến tổng bằng 0
    while (n != 0)  // Lặp khi n khác 0
    {
        tong += n % 10;  // Lấy chữ số cuối cùng
        n /= 10;  // Loại bỏ chữ số cuối cùng
    }
    return tong;
}

int main() 
{
    int n;
    cout << "Nhập một số: "; // Nhập số cần tính tổng các chữ số
    cin >> n; // Đọc giá trị từ bàn phím

    cout << "Tổng các chữ số trong " << n << " là: " << tinh_tong_chu_so(n) << endl; // In ra m

    return 0;
}



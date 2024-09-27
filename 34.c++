// VIẾT BẰNG C++
// Tính trung bình của danh sách: Nhập một danh sách các số và tính trung bình của chúng.

#include <iostream>
using namespace std;

int main()
{
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;

    // Tạo mảng để lưu danh sách các số
    int danh_sach[n];

    // Nhập các phần tử từ người dùng
    cout << "Nhập các số: ";
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử trong danh sách
    {
        cin >> danh_sach[i]; // Nhập từng phần tử
    }

    // Tính tổng của các phần tử trong danh sách
    int tong = 0;
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử trong danh sách
    {
        tong += danh_sach[i]; // Cộng từng phần tử vào tổng 
    }

    // Tính trung bình
    double trung_binh = (double)tong / n; // Ép kiểu tổng về kiểu double để tránh mất dữ liệu

    // In kết quả
    cout << "Trung bình của danh sách là: " << trung_binh << endl;

    return 0;
}

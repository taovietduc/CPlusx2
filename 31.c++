// VIẾT BẰNG C++
// Tính tổng các số trong danh sách: Nhập một danh sách các số và tính tổng của chúng.

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
    int tong = 0;

    // Nhập các phần tử từ ban phím
    cout << "Nhập các số: ";
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử
    {
        cin >> danh_sach[i];
        tong += danh_sach[i];  // Cộng dồn các giá trị
    }

    // In tổng của các số trong danh sách
    cout << "Tổng của các số trong danh sách là: " << tong << endl;

    return 0;
}

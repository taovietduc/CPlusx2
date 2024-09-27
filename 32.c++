// VIẾT BẰNG C++
// Tìm số lớn nhất trong danh sách: Nhập một danh sách các số và tìm số lớn nhất trong danh sách.

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
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử
    { 
        cin >> danh_sach[i];// Nhập từng phần tử
    }

    // Tìm số lớn nhất
    int max_num = danh_sach[0]; // Giả sử số đầu tiên là lớn nhất
    for (int i = 1; i < n; i++) // Duyệt qua từng phần tử
    {
        if (danh_sach[i] > max_num) // Nếu tìm thấy số lớn hơn
        {
            max_num = danh_sach[i];// Cập nhật số lớn nhất
        }
    }

    // In số lớn nhất
    cout << "Số lớn nhất trong danh sách là: " << max_num << endl;

    return 0;
}

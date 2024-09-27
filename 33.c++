// VIẾT BẰNG C++
// Tìm số nhỏ nhất trong danh sách: Nhập một danh sách các số và tìm số nhỏ nhất trong danh sách.

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

    // Tìm số nhỏ nhất
    int min_num = danh_sach[0]; // Giả sử số đầu tiên là số nhỏ nhất
    for (int i = 1; i < n; i++) // Duyệt qua từng phần tử trong danh sách
    {
        if (danh_sach[i] < min_num) // Nếu phần tử hiện tại nhỏ hơn số nhỏ nhất 
        {
            min_num = danh_sach[i]; // Cập nhật số nhỏ nhất
        }
    }

    // In số nhỏ nhất
    cout << "Số nhỏ nhất trong danh sách là: " << min_num << endl;

    return 0;
}
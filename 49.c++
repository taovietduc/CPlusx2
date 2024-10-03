// VIẾT BẰNG C++
// Tính tổng các số chẵn trong danh sách.

#include <iostream>
using namespace std;

int main() // Hàm main không tham số
{
    int n, tong = 0; // Khai báo biến n và tổng các số chẵn

    // Nhập số lượng phần tử trong danh sách
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;

    // Cấp phát động bộ nhớ cho mảng
    int* danh_sach = new int[n]; // Khai báo mảng danh_sach có n phần tử kiểu int

    // Nhập các phần tử vào danh sách
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong danh sách
    {
        cin >> danh_sach[i]; // Nhập phần tử thứ i vào danh sách
        if (danh_sach[i] % 2 == 0) // Kiểm tra số chẵn 
        {
            tong += danh_sach[i];  // Tính tổng các số chẵn
        }
    }

    // In tổng các số chẵn
    cout << "Tổng các số chẵn trong danh sách là: " << tong << endl;

    // Giải phóng bộ nhớ đã cấp phát
    delete[] danh_sach; // Giải phóng bộ nhớ đã cấp phát cho mảng danh_sach

    return 0;
}

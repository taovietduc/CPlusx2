// VIẾT BẰNG C++
// Sắp xếp danh sách: Nhập một danh sách các số và sắp xếp chúng theo thứ tự tăng dần.

#include <iostream>
#include <algorithm>  // Thư viện cho hàm sort
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
        cin >> danh_sach[i]; // Nhập phần tử thứ i
    }

    // Sắp xếp danh sách theo thứ tự tăng dần
    sort(danh_sach, danh_sach + n); // Hàm sort sẽ sắp xếp danh sách từ danh_sach[0] đến danh_sach[n-1]

    // In danh sách đã sắp xếp
    cout << "Danh sách sau khi sắp xếp: ";
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử trong danh sách
    {
        cout << danh_sach[i] << " "; // In phần tử thứ i
    }
    cout << endl;

    return 0;
}
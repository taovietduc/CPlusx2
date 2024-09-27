// VIẾT BẰNG C++
// Đếm số lần xuất hiện của số trong danh sách: Nhập một danh sách và một số, đếm số lần xuất hiện của số trong danh sách.

#include <iostream>
using namespace std;

int main() 
{
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;

    // Tạo mảng để lưu danh sách các số
    int danh_sach[n]; // Mảng có n phần tử (0, 1, 2, ..., n-1)

    // Nhập các phần tử từ người dùng
    cout << "Nhập các số: ";
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử
    {
        cin >> danh_sach[i];
    }

    // Nhập số cần tìm
    int so_can_tim;
    cout << "Nhập số cần đếm: ";
    cin >> so_can_tim;

    // Đếm số lần xuất hiện của số cần tìm
    int dem = 0; // Biến đếm số lần xuất hiện
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử
    {
        if (danh_sach[i] == so_can_tim) // Nếu phần tử hiện tại bằng số cần tìm
        {
            dem++; // Tăng biến đếm lên 1
        }
    }

    // In kết quả
    cout << "Số " << so_can_tim << " xuất hiện " << dem << " lần trong danh sách." << endl;

    return 0;
}

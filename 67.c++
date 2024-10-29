// VIẾT BẰNG C++
// Bài 67: Tạo hàm tính tổng các số trong danh sách.

#include <iostream> // Thư viện nhập xuất
using namespace std;

int tinh_tong_danh_sach(int danh_sach[], int n)  // Hàm tính tổng các số trong danh sách
{
    int tong = 0; // Biến lưu tổng các số trong danh sách
    
    // Duyệt qua mảng và tính tổng
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong danh sách
    {
        tong += danh_sach[i]; // Cộng phần tử vào tổng
    }
    
    return tong; // Trả về tổng
}

int main()  // Hàm main
{
    int n; 
    
    // Nhập số lượng phần tử trong danh sách
    cout << "Nhập số lượng phần tử trong danh sách: "; 
    cin >> n;
    
    int danh_sach[100]; // Giả sử tối đa 100 phần tử
    
    // Nhập các phần tử vào danh sách
    cout << "Nhập các phần tử: "; 
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong danh sách
    {
        cin >> danh_sach[i]; // Nhập phần tử thứ i
    }
    
    // Tính tổng và in kết quả
    int tong = tinh_tong_danh_sach(danh_sach, n); // Gọi hàm tính tổng
    cout << "Tổng của các số trong danh sách là: " << tong << endl; // In ra kết quả
    
    return 0;
}

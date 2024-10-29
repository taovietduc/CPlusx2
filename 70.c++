// VIẾT BẰNG C++
// Bài 70: Tạo hàm tính trung bình của danh sách.

#include <iostream>
using namespace std;

double tinh_trung_binh(int danh_sach[], int n)  // Hàm tính trung bình của danh sách
{
    int tong = 0; // Khởi tạo tổng bằng 0
    
    // Tính tổng của các phần tử trong danh sách
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử để cộng dồn
    {
        tong += danh_sach[i]; // Cộng dồn từng phần tử vào tổng
    }
    
    // Tính trung bình
    return static_cast<double>(tong) / n; // Ép kiểu tổng về kiểu double rồi chia cho số lượng phần tử
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
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử để nhập giá trị
    {
        cin >> danh_sach[i]; // Nhập giá trị vào mảng
    } 
    
    // Tính trung bình và in kết quả
    double trung_binh = tinh_trung_binh(danh_sach, n); // Gọi hàm tính trung bình của danh sách
    cout << "Giá trị trung bình của danh sách là: " << trung_binh << endl;
    
    return 0;
}


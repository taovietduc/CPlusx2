// VIẾT BẰNG C++
// Tạo hàm tính diện tích hình vuông.

#include <iostream>
using namespace std;

// Hàm tính diện tích hình vuông
double tinh_dien_tich_hinh_vuong(double canh) // canh là tham số truyền vào của hàm
{
    return canh * canh; // Diện tích hình vuông = cạnh * cạnh
}

int main()  // Hàm main
{
    double canh; // Khai báo biến canh kiểu double
    
    // Nhập độ dài cạnh từ người dùng
    cout << "Nhập độ dài cạnh của hình vuông: "; 
    cin >> canh;
    
    // Tính và in kết quả
    double dien_tich = tinh_dien_tich_hinh_vuong(canh); // Gọi hàm tinh_dien_tich_hinh_vuong
    cout << "Diện tích của hình vuông là: " << dien_tich << endl; // In kết quả
    
    return 0;
}


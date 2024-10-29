// VIẾT BẰNG PYTHON
// Bài 58: Tạo hàm tính diện tích hình chữ nhật.

#include <iostream>
using namespace std;

// Hàm tính diện tích hình chữ nhật
double tinh_dien_tich_hinh_chu_nhat(double chieu_dai, double chieu_rong)  
// Hàm có 2 tham số chieu_dai và chieu_rong kiểu double và trả về kiểu double
{
    return chieu_dai * chieu_rong; // Diện tích = chiều dài * chiều rộng
}

int main() 
{
    double chieu_dai, chieu_rong; // Khai báo biến chiều dài và chiều rộng
    
    // Nhập chiều dài và chiều rộng từ người dùng
    cout << "Nhập chiều dài của hình chữ nhật: "; 
    cin >> chieu_dai;
    cout << "Nhập chiều rộng của hình chữ nhật: ";
    cin >> chieu_rong;
    
    // Tính và in kết quả
    double dien_tich = tinh_dien_tich_hinh_chu_nhat(chieu_dai, chieu_rong); 
    // Gọi hàm tính diện tích hình chữ nhật và lưu kết quả vào biến dien_tich
    cout << "Diện tích của hình chữ nhật là: " << dien_tich << endl; // In kết quả
    
    return 0;
}

// VIẾT BẰNG C++
// Bài 105: Tạo hàm tính chu vi của một hình chữ nhật.

#include <iostream>
using namespace std;

// Hàm tính chu vi của hình chữ nhật
double tinh_chu_vi_hinh_chu_nhat(double chieu_dai, double chieu_rong)   
// Hàm trả về kiểu double và có 2 tham số truyền vào là chiều dài và chiều rộng của hình chữ nhật   
{
    return 2 * (chieu_dai + chieu_rong);  // Công thức tính chu vi hình chữ nhật là 2 * (chiều dài + chiều rộng)
}

int main() 
{
    double chieu_dai, chieu_rong; // Khai báo 2 biến chieu_dai và chieu_rong kiểu double

    cout << "Nhập chiều dài của hình chữ nhật: ";
    cin >> chieu_dai; // Nhập chiều dài của hình chữ nhật

    cout << "Nhập chiều rộng của hình chữ nhật: ";
    cin >> chieu_rong; // Nhập chiều rộng của hình chữ nhật

    double chu_vi = tinh_chu_vi_hinh_chu_nhat(chieu_dai, chieu_rong);
    cout << "Chu vi của hình chữ nhật là: " << chu_vi << endl; // In ra chu vi của hình chữ nhật

    return 0; // Kết thúc chương trình
}


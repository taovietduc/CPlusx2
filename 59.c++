// VIẾT BẰNG PYTHON
// Bài 59: Tạo hàm tính diện tích hình tròn.

#include <iostream>
#include <cmath> // Để sử dụng M_PI

#ifndef M_PI // Nếu không có M_PI (trong trường hợp Windows) 
#define M_PI 3.14159265358979323846 // Định nghĩa M_PI bằng giá trị của nó 
#endif 

// Hàm tính diện tích hình tròn
double tinh_dien_tich_hinh_tron(double ban_kinh)  
// Hàm có 1 tham số ban_kinh kiểu double và trả về kiểu double
{
    if (ban_kinh < 0) // Kiểm tra nếu bán kính âm 
    {
        std::cerr << "Bán kính không thể âm!" << std::endl;
        return -1; // Trả về -1 để chỉ ra lỗi
    }
    return M_PI * ban_kinh * ban_kinh; // Diện tích = π * bán kính * bán kính
}

int main() 
{
    double ban_kinh; // Khai báo biến bán kính hình tròn 
    std::cout << "Nhập bán kính hình tròn: "; 
    std::cin >> ban_kinh;

    double dien_tich = tinh_dien_tich_hinh_tron(ban_kinh); 
    // Gọi hàm tính diện tích hình tròn
    if (dien_tich != -1) // Kiểm tra nếu không có lỗi
    { 
        std::cout << "Diện tích hình tròn là: " << dien_tich << std::endl;
    }

    return 0; // Kết thúc chương trình
}

// Kết quả:
// Nhập bán kính của hình tròn: 4
// Diện tích của hình tròn là: 50.27
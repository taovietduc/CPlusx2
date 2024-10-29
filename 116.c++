// VIẾT BẰNG C++
// Bài 116: Tạo hàm chuyển đổi từ radian sang độ.

#include <iostream>
#include <cmath> // thư viện hỗ trợ hàm M_PI 

using namespace std;

double radiansToDegrees(double radian) // chuyển đổi từ radian sang độ 
{
    return radian * (180.0 / M_PI); // 1 radian = 180/π độ 
}

int main() 
{
    double radian = M_PI; 
    double degree = radiansToDegrees(radian); // chuyển đổi từ radian sang độ 
    cout << radian << " radian bằng " << degree << " độ" << endl; // 3.14159 radian bằng 180 độ

    return 0; 
}

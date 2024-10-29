// VIẾT BẰNG C++
// Bài 115: Tạo hàm chuyển đổi từ độ sang radian.

#include <iostream>
#include <cmath> // M_PI = 3.14159265358979323846 (pi)

using namespace std;

double degreesToRadians(double degree)  // Hàm chuyển đổi từ độ sang radian
{
    /*
    Chuyển đổi từ độ sang radian.

    Parameters:
    degree (double): Góc tính bằng độ.

    Returns:
    double: Góc tính bằng radian.
    */
    return degree * (M_PI / 180.0); // 1 độ = pi/180 radian
}

int main() 
{
    double degree = 180; // Góc 180 độ tương ứng với pi radian
    double radian = degreesToRadians(degree); // Gọi hàm chuyển đổi từ độ sang radian
    cout << degree << " độ bằng " << radian << " radian" << endl;

    return 0;
}

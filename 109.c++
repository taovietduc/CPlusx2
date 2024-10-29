// VIẾT BẰNG C++
// Bài 109: Tạo hàm tính khoảng cách giữa hai điểm trên mặt phẳng tọa độ.

#include <iostream>
#include <cmath> // Thư viện hỗ trợ các hàm toán học cơ bản

using namespace std;

double distanceBetweenPoints(double x1, double y1, double x2, double y2)  
// Hàm tính khoảng cách giữa hai điểm
{
    /*
    Tính khoảng cách giữa hai điểm (x1, y1) và (x2, y2) trên mặt phẳng tọa độ.

    Parameters:
    x1 (double): Tọa độ x của điểm thứ nhất.
    y1 (double): Tọa độ y của điểm thứ nhất.
    x2 (double): Tọa độ x của điểm thứ hai.
    y2 (double): Tọa độ y của điểm thứ hai.

    Returns:
    double: Khoảng cách giữa hai điểm.
    */
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
    // Công thức tính khoảng cách giữa hai điểm
}

int main() 
{
    double x1 = 1, y1 = 2; // Tọa độ của điểm thứ nhất
    double x2 = 4, y2 = 6; // Tọa độ của điểm thứ hai

    double distance = distanceBetweenPoints(x1, y1, x2, y2); // Gọi hàm tính khoảng cách giữa hai điểm
    cout << "Khoảng cách giữa hai điểm (" << x1 << ", " << y1 << ") và (" // Xuất kết quả
         << x2 << ", " << y2 << ") là: " << distance << endl;

    return 0;
}

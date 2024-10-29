// VIẾT BẰNG C++
// Bài 114: Tạo hàm tính diện tích của một tam giác với ba cạnh cho trước.

#include <iostream>
#include <cmath> // Thư viện hỗ trợ các hàm toán học

using namespace std; 

double triangleArea(double a, double b, double c)  
{
    /*
    Tính diện tích của một tam giác với ba cạnh cho trước.

    Parameters:
    a, b, c (double): Độ dài ba cạnh của tam giác.

    Returns:
    double: Diện tích của tam giác hoặc -1 nếu ba cạnh không tạo thành tam giác.
    */
    // Kiểm tra điều kiện tạo thành tam giác
    if (a + b > c && a + c > b && b + c > a)  // Các cạnh của tam giác phải lớn hơn tổng hai cạnh còn lại
    {
        double s = (a + b + c) / 2;  // Nửa chu vi
        double area = sqrt(s * (s - a) * (s - b) * (s - c));  // Công thức Heron tính diện tích tam giác
        return area;
    } 
    else  // Không tạo thành tam giác
    {
        return -1;  // Không tạo thành tam giác
    }
}

int main()  
{
    double a = 3, b = 4, c = 5; // Ba cạnh của tam giác 
    double area = triangleArea(a, b, c); // Tính diện tích tam giác

    if (area != -1)  // Nếu ba cạnh tạo thành tam giác thì in ra diện tích
    {
        cout << "Diện tích của tam giác là: " << area << endl;
    } 
    else  // Ngược lại in ra không tạo thành tam giác
    {
        cout << "Ba cạnh không tạo thành tam giác." << endl;
    }

    return 0; // Kết thúc chương trình
}

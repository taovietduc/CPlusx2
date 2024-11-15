// VIẾT BẰNG C++
// Bài 138: Tạo hàm tính diện tích hình elip.

#include <iostream>
#include <cmath>  // thư viện toán học 
using namespace std;

double ellipseArea(double a, double b)  // a: bán trục lớn, b: bán trục nhỏ 
{
    const double PI = 3.141592653589793; // số PI 
    return PI * a * b; // diện tích hình elip
}

int main() 
{
    double a = 5; // bán trục lớn 
    double b = 3; // bán trục nhỏ
    cout << "Diện tích hình elip với bán trục lớn " << a << " và bán trục nhỏ " << b << " là: " << ellipseArea(a, b) << endl; 
    // in ra diện tích hình elip
    return 0;
}

// Kết quả: Diện tích hình elip với bán trục lớn 5 và bán trục nhỏ 3 là: 47.1239
// VIẾT BẰNG C++
// In bảng cửu chương cho một số.

#include <iostream>
using namespace std;

int main() 
{
    int so;
    // Nhập một số từ người dùng
    cout << "Nhập một số: "; // In ra dòng chữ "Nhập một số:"
    cin >> so;

    // In bảng cửu chương của số đó
    cout << "Bảng cửu chương của " << so << ":\n"; // In ra dòng chữ "Bảng cửu chương của số đã nhập:"
    for (int i = 1; i <= 10; i++) // Duyệt từ 1 đến 10 để in bảng cửu chương của số đã nhập
    {
        cout << so << " x " << i << " = " << so * i << endl;
    }

    return 0;
}

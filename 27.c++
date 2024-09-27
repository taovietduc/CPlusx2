// VIẾT BẰNG C++
// In ra hình vuông sao: Nhập số dòng và số cột và in ra hình vuông sao.

#include <iostream>
using namespace std;

int main() 
{
    // Nhập số dòng và số cột từ bàn phím
    int so_dong, so_cot;
    cout << "Nhập số dòng: ";
    cin >> so_dong;
    cout << "Nhập số cột: ";
    cin >> so_cot;

    // In hình vuông sao
    for (int i = 0; i < so_dong; i++) // Vòng lặp dùng để in ra số dòng
    {
        for (int j = 0; j < so_cot; j++) // Vòng lặp dùng để in ra số cột
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

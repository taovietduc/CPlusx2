// VIẾT BẰNG C++
// In ra tam giác sao: Nhập số dòng và in ra tam giác sao.

#include <iostream>
using namespace std;

int main() 
{
    // Nhập số dòng từ bàn phím
    int so_dong;
    cout << "Nhập số dòng: ";
    cin >> so_dong;

    // In tam giác sao
    for (int i = 1; i <= so_dong; i++) // Duyệt qua từng dòng
    {
        for (int j = 1; j <= i; j++) // In ra số sao tương ứng với dòng
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// VIẾT BẰNG C++
// Tạo ma trận 3x3 và tính tích của các phần tử.

#include <iostream>
using namespace std;

int main()  // Hàm main 
{
    // Tạo ma trận 3x3
    int ma_tran[3][3]; // Ma trận 3x3 chứa các phần tử nguyên 
    long long tich = 1;  // Biến để lưu tích các phần tử

    // Nhập các phần tử của ma trận 3x3
    cout << "Nhập các phần tử của ma trận 3x3:\n"; 
    for (int i = 0; i < 3; i++) // Duyệt qua hàng của ma trận
    {
        for (int j = 0; j < 3; j++)  // Duyệt qua cột của ma trận
        {
            cout << "Phần tử [" << i << "][" << j << "]: ";  // In ra vị trí của phần tử
            cin >> ma_tran[i][j]; // Nhập phần tử cho ma trận
            tich *= ma_tran[i][j];  // Tính tích của các phần tử
        }
    }

    // In tích của các phần tử
    cout << "Tích các phần tử trong ma trận là: " << tich << endl;

    return 0;
}

// OUTPUT
// Nhập các phần tử của ma trận 3x3:
// Phần tử [0][0]: 1
// Phần tử [0][1]: 2
// Phần tử [0][2]: 3
// Phần tử [1][0]: 4
// Phần tử [1][1]: 5
// Phần tử [1][2]: 6
// Phần tử [2][0]: 7
// Phần tử [2][1]: 8
// Phần tử [2][2]: 9
// Tích các phần tử trong ma trận là: 362880
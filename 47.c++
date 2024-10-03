// VIẾT BẰNG C++
// Tạo ma trận 2x2 và tính tổng của các phần tử.

#include <iostream> // Thư viện hỗ trợ nhập xuất dữ liệu
using namespace std;

int main()  // Hàm main không nhận tham số
{
    // Khai báo ma trận 2x2
    int ma_tran[2][2]; // Ma trận 2x2 có 2 hàng và 2 cột
    
    // Nhập các phần tử của ma trận
    cout << "Nhập các phần tử của ma trận 2x2:" << endl;
    for (int i = 0; i < 2; i++)  // Duyệt qua từng hàng
    {
        for (int j = 0; j < 2; j++)  // Duyệt qua từng cột
        {
            cout << "Phần tử [" << i << "][" << j << "]: "; // In ra thông báo
            cin >> ma_tran[i][j]; // Nhập phần tử tại hàng i, cột j
        }
    }

    // Tính tổng các phần tử
    int tong = 0; // Khởi tạo biến tổng
    for (int i = 0; i < 2; i++)  // Duyệt qua từng hàng 
    {
        for (int j = 0; j < 2; j++)  // Duyệt qua từng cột
        {
            tong += ma_tran[i][j]; // Cộng phần tử tại hàng i, cột j vào tổng
        }
    }

    // In ra tổng các phần tử
    cout << "Tổng các phần tử trong ma trận là: " << tong << endl;

    return 0;
}

// Output cho C++:
// Nhập các phần tử của ma trận 2x2:
// Phần tử [0][0]: 1
// Phần tử [0][1]: 2
// Phần tử [1][0]: 3
// Phần tử [1][1]: 4

// Tổng các phần tử trong ma trận là: 10

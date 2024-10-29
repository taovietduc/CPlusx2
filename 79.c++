// VIẾT BẰNG C++
// Bài 79: Tạo hàm tính tổng các số trong ma trận 3x3.

#include <iostream>
using namespace std;

// Hàm tính tổng các số trong ma trận 3x3
int tinh_tong_ma_tran(int ma_tran[3][3])  // ma_tran[3][3] là mảng 2 chiều 3x3  
{
    int tong = 0; // Khởi tạo biến tổng = 0     
    for (int i = 0; i < 3; i++)  // Duyệt từng hàng trong ma trận
    {
        for (int j = 0; j < 3; j++)  // Duyệt từng cột trong hàng đó 
        {
            tong += ma_tran[i][j];  // Cộng từng phần tử vào tổng
        }
    }
    return tong; // Trả về tổng 
}

int main() 
{
    // Tạo ma trận 3x3
    int ma_tran[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Ma trận 3x3

    // Gọi hàm và in kết quả
    int tong = tinh_tong_ma_tran(ma_tran); // Gọi hàm tính tổng 
    cout << "Tổng các phần tử trong ma trận là: " << tong << endl;  // In kết quả

    return 0; // Kết thúc chương trình
}

// Kết quả khi chạy chương trình:
// Tổng các phần tử trong ma trận là: 45
// Hàm tinh_tong_ma_tran() sẽ duyệt qua từng phần tử trong ma trận 3x3 và cộng từng phần tử vào biến tổng.
// Kết quả cuối cùng sẽ là tổng của tất cả các phần tử trong ma trận.


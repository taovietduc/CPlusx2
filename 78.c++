// VIẾT BẰNG C++
// Bài 78: Tạo hàm tính tổng các số trong ma trận 2x2.

#include <iostream>
using namespace std;

// Hàm tính tổng các số trong ma trận 2x2
int tinh_tong_ma_tran(int ma_tran[2][2])  // ma_tran[2][2] là mảng 2 chiều 2x2  
{
    int tong = 0; // Khởi tạo biến tổng = 0     
    for (int i = 0; i < 2; i++)  // Duyệt từng hàng trong ma trận
    {
        for (int j = 0; j < 2; j++)  // Duyệt từng cột trong hàng đó 
        {
            tong += ma_tran[i][j];  // Cộng từng phần tử vào tổng
        }
    }
    return tong; // Trả về tổng 
}

int main() 
{
    // Tạo ma trận 2x2
    int ma_tran[2][2] = {{1, 2}, {3, 4}}; // Ma trận 2x2

    // Gọi hàm và in kết quả
    int tong = tinh_tong_ma_tran(ma_tran); // Gọi hàm tính tổng 
    cout << "Tổng các phần tử trong ma trận là: " << tong << endl;  // In kết quả

    return 0; // Kết thúc chương trình
}

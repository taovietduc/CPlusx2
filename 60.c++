// VIẾT BẰNG C++
// Bài 60: Tạo hàm kiểm tra số nguyên tố.

#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool kiemTraSoNguyenTo(int n) // Hàm có 1 tham số n kiểu int và trả về kiểu bool
{
    if (n <= 1) // Nếu n nhỏ hơn hoặc bằng 1 
    {
        return false; // Số nguyên tố phải lớn hơn 1
    }
    for (int i = 2; i * i <= n; i++) // Duyệt từ 2 đến căn bậc 2 của n
    {
        if (n % i == 0)  // Nếu n chia hết cho i
        {
            return false; // Nếu n chia hết cho i, n không phải là số nguyên tố
        }
    }
    return true; // Nếu không có ước nào khác, n là số nguyên tố
}

int main() // Hàm main
{
    int num; // Khai báo biến num kiểu int
    cout << "Nhập một số: "; // Nhập số từ bán phím
    cin >> num; // Lưu số vào biến num

    if (kiemTraSoNguyenTo(num)) // Gọi hàm kiemTraSoNguyenTo và kiểm tra kết quả
    {
        cout << num << " là số nguyên tố." << endl; // In kết quả
    } 
    else // Nếu không phải số nguyên tố 
    {
        cout << num << " không phải là số nguyên tố." << endl; // In kết quả
    }

    return 0;
}
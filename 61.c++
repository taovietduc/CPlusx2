// VIẾT BẰNG C++
//  Bài 61: Tạo hàm tính giai thừa của số n.

#include <iostream>
using namespace std;

// Hàm tính giai thừa của số n
long long tinhGiaiThua(int n) // Hàm có 1 tham số n kiểu int và trả về kiểu long long
{
    if (n == 0 || n == 1) // Nếu n bằng 0 hoặc 1 
    {
        return 1;  // Giai thừa của 0 và 1 là 1
    } 
    else // Nếu n lớn hơn 1
    {
        return n * tinhGiaiThua(n - 1);  // Đệ quy tính giai thừa
    }
}

int main() // Hàm main 
{
    int num; // Khai báo biến num kiểu int
    cout << "Nhập một số: "; // Nhập số từ bàn phím
    cin >> num; // Lưu số vào biến num

    // Gọi hàm và in kết quả
    cout << "Giai thừa của " << num << " là " << tinhGiaiThua(num) << endl;

    return 0;
}

// Kết quả
// Nhập một số: 4
// Giai thừa của 4 là 24
// VIẾT BẰNG C++
// Bài 98: Tạo hàm kiểm tra một số có phải là số chính phương không.

#include <iostream> // Thư viện hỗ trợ nhập xuất dữ liệu
#include <cmath> // Thư viện hỗ trợ hàm sqrt (square root - căn bậc 2)
using namespace std;

// Hàm kiểm tra số chính phương
bool la_so_chinh_phuong(int n)  // Truyền vào số cần kiểm tra
{
    if (n < 0) return false;  // Số âm không thể là số chính phương
    int sqrt_n = sqrt(n); // Tính căn bậc 2 của n
    return (sqrt_n * sqrt_n == n);  // Kiểm tra nếu bình phương của sqrt_n bằng n
}

int main() 
{
    int n; // Khai báo biến số cần kiểm tra
    cout << "Nhập một số: "; // Yêu cầu nhập số cần kiểm tra
    cin >> n; // Nhập số cần kiểm tra

    if (la_so_chinh_phuong(n))  // Gọi hàm kiểm tra số chính phương
    {
        cout << n << " là số chính phương." << endl; // Nếu là số chính phương thì in ra thông báo
    }
    else  // Nếu không phải số chính phương thì in ra thông báo
    {
        cout << n << " không phải là số chính phương." << endl; 
        // Nếu không phải số chính phương thì in ra thông báo
    }

    return 0;
}

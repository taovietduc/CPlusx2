// VIẾT BẰNG C++
// Bài 108: Tạo hàm tính số hạng thứ n của dãy số hình học.

#include <iostream>
#include <cmath> // Để sử dụng hàm pow
using namespace std; 

// Hàm tính số hạng thứ n của dãy số hình học
double tinh_so_hang_thu_n(double a1, double r, int n)  
// a1: số hạng đầu tiên, r: công bội, n: vị trí số hạng cần tính
{
    return a1 * pow(r, n - 1); // Số hạng thứ n = a1 * r^(n-1) 
}

int main() 
{
    double a1, r; // Số hạng đầu tiên và công bội của dãy số hình học
    int n; // Vị trí số hạng cần tính 

    cout << "Nhập số hạng đầu tiên (a1): ";
    cin >> a1; 
    cout << "Nhập công bội (r): ";
    cin >> r;
    cout << "Nhập vị trí số hạng cần tính (n): ";
    cin >> n;

    double so_hang_thu_n = tinh_so_hang_thu_n(a1, r, n); // Gọi hàm để tính số hạng thứ n của dãy
    cout << "Số hạng thứ " << n << " của dãy là: " << so_hang_thu_n << endl; 

    return 0; // Kết thúc chương trình
}

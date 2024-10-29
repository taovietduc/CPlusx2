// VIẾT BẰNG C++
// Bài 56: Kiểm tra số hoàn hảo.

#include <iostream>
using namespace std;

// Hàm kiểm tra số hoàn hảo
bool kiem_tra_so_hoan_hao(int n)  // Số hoàn hảo là số bằng tổng các ước của nó (không kể nó)
{
    int tong_uoc = 0; // Khởi tạo biến tổng các ước của n
    for (int i = 1; i < n; i++)  // Duyệt từ 1 đến n-1
    {
        if (n % i == 0)  // Kiểm tra nếu i là ước của n
        {  // Kiểm tra nếu i là ước của n
            tong_uoc += i; // Cộng i vào tổng các ước
        }
    }
    return tong_uoc == n;  // Kiểm tra tổng các ước có bằng n không
}

int main()  // Hàm main
{
    int so; // Khai báo biến số nguyên so
    
    // Nhập số từ bàn phím
    cout << "Nhập một số: "; // Xuất thông báo nhập số
    cin >> so; // Nhập số từ bàn phím
    
    // Kiểm tra và in kết quả
    if (kiem_tra_so_hoan_hao(so)) // Nếu số so là số hoàn hảo 
    {
        cout << so << " là số hoàn hảo." << endl; // Xuất kết quả
    } 
    else  // Ngược lại nếu số so không phải là số hoàn hảo
    {
        cout << so << " không phải là số hoàn hảo." << endl; // Xuất kết quả
    }

    return 0; // Kết thúc chương trình
}

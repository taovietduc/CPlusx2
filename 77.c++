// VIẾT BẰNG C++
// Bài 77: Tạo hàm kiểm tra phần tử có trong danh sách.

#include <iostream>
using namespace std;

// Hàm kiểm tra xem phần tử có tồn tại trong danh sách không
bool kiem_tra_phan_tu(int danh_sach[], int n, int phan_tu)  
// danh_sach[]: mảng, n: số phần tử, phan_tu: phần tử cần kiểm tra
{
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong danh sách
    {
        if (danh_sach[i] == phan_tu)  // Nếu phần tử cần kiểm tra tồn tại trong danh sách
        {
            return true; // Phần tử tồn tại trong danh sách
        }
    }
    return false; // Phần tử không tồn tại trong danh sách
}

int main()  // Hàm main
{
    // Tạo danh sách mẫu
    int danh_sach[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Mảng danh sách
    int n = sizeof(danh_sach) / sizeof(danh_sach[0]); // Số phần tử của danh sách

    // Phần tử cần kiểm tra
    int phan_tu = 5; // Phần tử cần kiểm tra

    // Gọi hàm kiểm tra phần tử
    if (kiem_tra_phan_tu(danh_sach, n, phan_tu))  // Nếu phần tử tồn tại trong danh sách
    {
        cout << phan_tu << " có trong danh sách." << endl;
    } 
    else  // Nếu phần tử không tồn tại trong danh sách 
    {
        cout << phan_tu << " không có trong danh sách." << endl;
    }
 
    return 0; // Kết thúc chương trình
}

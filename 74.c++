// VIẾT BẰNG C++
// Bài 74: Tạo hàm lọc danh sách theo điều kiện.

#include <iostream>
using namespace std;

// Hàm lọc danh sách theo điều kiện
int* loc_danh_sach(int* danh_sach, int n, bool (*dieu_kien)(int), int& so_luong_loc) 
// Hàm trả về mảng sau khi lọc và số lượng phần tử sau khi lọc 
{
    // Tạo mảng động để lưu các phần tử thỏa mãn điều kiện
    int* danh_sach_loc = new int[n];
    so_luong_loc = 0; // Biến đếm số lượng phần tử thỏa mãn điều kiện
    
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử trong danh sách
    {
        if (dieu_kien(danh_sach[i])) // Kiểm tra xem phần tử thứ i có thỏa
        {
            danh_sach_loc[so_luong_loc++] = danh_sach[i];  // Thêm phần tử thỏa mãn điều kiện
        }
    }
    return danh_sach_loc; // Trả về mảng sau khi lọc
}

// Điều kiện lọc (ví dụ: lọc số chẵn)
bool la_so_chan(int x) // Hàm trả về true nếu x là số chẵn, ngược lại trả về false
{
    return x % 2 == 0; // Số chẵn là số chia hết cho 2
}

int main() 
{
    // Tạo danh sách mẫu
    int danh_sach[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Danh sách các số từ 1 đến 10
    int n = sizeof(danh_sach) / sizeof(danh_sach[0]); // Số lượng phần tử trong danh sách

    // Biến đếm số lượng phần tử sau khi lọc
    int so_luong_loc = 0;

    // Lọc danh sách theo điều kiện là số chẵn
    int* danh_sach_loc = loc_danh_sach(danh_sach, n, la_so_chan, so_luong_loc);

    // In kết quả
    cout << "Danh sách các số chẵn là: ";
    for (int i = 0; i < so_luong_loc; i++) //   In ra các phần tử sau khi lọc
    {
        cout << danh_sach_loc[i] << " "; // In ra các phần tử sau khi lọc
    }
    cout << endl; // Xuống dòng

    // Giải phóng bộ nhớ mảng động
    delete[] danh_sach_loc; // Giải phóng mảng sau khi sử dụng xong

    return 0;
}

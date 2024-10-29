// VIẾT BẰNG C++
// Bài 76: Tạo hàm tạo danh sách các số nguyên tố từ danh sách.

#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool la_so_nguyen_to(int n) // Trả về true nếu là số nguyên tố, ngược lại trả về false
{
    if (n <= 1) return false; // 1 không phải số nguyên tố
    for (int i = 2; i <= sqrt(n); i++) // Duyệt từ 2 đến căn bậc 2 của n
    {
        if (n % i == 0) return false; // Nếu tồn tại số chia hết cho n thì không phải số nguyên tố
    }
    return true;
}

// Hàm tạo danh sách các số nguyên tố từ danh sách đầu vào
int* loc_so_nguyen_to(int* danh_sach, int n, int& so_luong_nguyen_to)  // Trả về mảng số nguyên tố
{
    // Tạo mảng động để lưu các số nguyên tố
    int* danh_sach_nguyen_to = new int[n]; // Mảng số nguyên tố có thể chứa tối đa n phần tử
    so_luong_nguyen_to = 0; // Biến đếm số lượng số nguyên tố

    for (int i = 0; i < n; i++)  // Duyệt qua danh sách đầu vào
    {
        if (la_so_nguyen_to(danh_sach[i]))  // Nếu là số nguyên tố
        {
            danh_sach_nguyen_to[so_luong_nguyen_to++] = danh_sach[i]; // Thêm số nguyên tố vào mảng
        }
    } 
    return danh_sach_nguyen_to; // Trả về mảng số nguyên tố
}

int main() {
    // Tạo danh sách mẫu
    int danh_sach[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(danh_sach) / sizeof(danh_sach[0]);

    // Biến đếm số lượng số nguyên tố
    int so_luong_nguyen_to = 0;   // Số lượng số nguyên tố ban đầu là 0

    // Gọi hàm lọc số nguyên tố
    int* danh_sach_nguyen_to = loc_so_nguyen_to(danh_sach, n, so_luong_nguyen_to); // Mảng số nguyên tố

    // In kết quả
    cout << "Danh sách các số nguyên tố là: ";
    for (int i = 0; i < so_luong_nguyen_to; i++)  // Duyệt qua mảng số nguyên tố
    {
        cout << danh_sach_nguyen_to[i] << " "; // In ra kết quả
    } 
    cout << endl;

    // Giải phóng bộ nhớ động
    delete[] danh_sach_nguyen_to; // Giải phóng mảng số nguyên tố

    return 0; // Kết thúc chương trình
}

// VIẾT BẰNG C++
// Bài 104: Tạo hàm tính trung bình của các số nguyên tố trong danh sách.

#include <iostream>
#include <cmath> // Thư viện hỗ trợ các hàm toán học
using namespace std;

// Hàm kiểm tra số nguyên tố
bool la_so_nguyen_to(int n)  // Trả về true nếu là số nguyên tố, ngược lại trả về false
{
    if (n < 2) return false; // Nếu n < 2 thì không phải số nguyên tố
    for (int i = 2; i <= sqrt(n); i++)  // Duyệt từ 2 đến căn bậc 2 của n
    {
        if (n % i == 0)  // Nếu n chia hết cho i thì không phải số nguyên tố
        {
            return false; // Trả về false
        }
    }
    return true;
}

// Hàm tính trung bình của các số nguyên tố trong danh sách
double tinh_trung_binh_so_nguyen_to(int arr[], int n) // Trả về trung bình cộng của các số nguyên tố
{
    int tong = 0, dem = 0; // Khởi tạo tổng và số lượng số nguyên tố

    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong mảng
    {
        if (la_so_nguyen_to(arr[i]))  // Nếu là số nguyên tố
        {
            tong += arr[i]; // Cộng vào tổng
            dem++; // Tăng số lượng số nguyên tố
        }
    }

    if (dem == 0) // Nếu không có số nguyên tố
    {
        return 0;  // Nếu không có số nguyên tố, trả về 0
    }
    return static_cast<double>(tong) / dem;  // Trả về trung bình cộng
}

int main() 
{
    int n; // Số lượng phần tử trong danh sách
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;

    int* arr = new int[n]; // Khởi tạo mảng động chứa các phần tử
    cout << "Nhập các phần tử của danh sách: ";
    for (int i = 0; i < n; i++)  // Nhập các phần tử của danh sách
    {
        cin >> arr[i]; // Nhập phần tử thứ i
    }

    double trung_binh = tinh_trung_binh_so_nguyen_to(arr, n); // Tính trung bình cộng các số nguyên tố trong danh sách
    if (trung_binh == 0)  // Nếu không có số nguyên tố 
    {
        cout << "Danh sách không có số nguyên tố." << endl;
    } 
    else  // Nếu có số nguyên tố trong danh sách
    {
        cout << "Trung bình của các số nguyên tố trong danh sách: " << trung_binh << endl;
    }

    return 0; // Kết thúc chương trình 
}

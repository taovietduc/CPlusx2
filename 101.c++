// VIẾT BẰNG C++
// Câu 101: Tạo hàm tính tổng của một danh sách các số thực.

#include <iostream>
using namespace std;

// Hàm tính tổng của danh sách số thực
double tinh_tong_danh_sach_thuc(double arr[], int n)  // arr[]: mảng, n: số lượng phần tử của mảng
{
    double tong = 0; // Khởi tạo biến tổng
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử của mảng
    {
        tong += arr[i]; // Cộng từng phần tử vào biến tổng
    }
    return tong; // Trả về tổng
}

int main() 
{
    int n; // Số lượng phần tử của danh sách
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    
    double* arr = new double[n]; // Cấp phát bộ nhớ động cho mảng
    cout << "Nhập các phần tử của danh sách: ";
    for (int i = 0; i < n; i++)  // Nhập từng phần tử của mảng
    {
        cin >> arr[i];
    }

    double tong = tinh_tong_danh_sach_thuc(arr, n); // Gọi hàm tính tổng
    cout << "Tổng của danh sách là: " << tong << endl; // Xuất kết quả tổng

    delete[] arr; // Giải phóng bộ nhớ đã cấp phát cho mảng

    return 0;
}

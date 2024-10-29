// VIẾT BẰNG C++
// Bài 87: Tạo hàm đếm số phần tử dương trong danh sách.

#include <iostream>
using namespace std;

// Hàm đếm số phần tử dương trong danh sách
int dem_so_duong(int arr[], int n)  // arr[]: mảng, n: số lượng phần tử trong mảng 
{
    int dem = 0; // Biến đếm số phần tử dương
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong danh sách
    {
        if (arr[i] > 0) // Kiểm tra nếu phần tử lớn hơn 0
        { 
            dem++; // Tăng biến đếm lên 1
        }
    }
    return dem;
}

int main() 
{
    int n;
    cout << "Nhập số lượng phần tử của danh sách: ";
    cin >> n;

    int* arr = new int [n]; // Cấp phát bộ nhớ động cho mảng arr
    cout << "Nhập các phần tử của danh sách: ";     
    for (int i = 0; i < n; i++)  // Nhập các phần tử của danh sách 
    {
        cin >> arr[i]; // Nhập phần tử thứ i 
    }

    int so_phan_tu_duong = dem_so_duong(arr, n); // Gọi hàm dem_so_duong
    cout << "Số lượng phần tử dương trong danh sách là: " << so_phan_tu_duong << endl;

    delete[] arr; // Giải phóng bộ nhớ đã cấp phát cho mảng arr

    return 0; 
}



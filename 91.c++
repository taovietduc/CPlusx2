// VIẾT BẰNG C++
// Bài 91: Tạo hàm tìm số lần xuất hiện của một phần tử trong danh sách.

#include <iostream>
using namespace std;

// Hàm tìm số lần xuất hiện của một phần tử trong danh sách
int dem_so_lan_xuat_hien(int arr[], int n, int x)  
// arr[]: mảng, n: số phần tử của mảng, x: phần tử cần tìm số lần xuất hiện
{
    int dem = 0;
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong mảng 
    {
        if (arr[i] == x)  // Nếu phần tử tại vị trí i bằng x thì tăng biến đếm lên 1
        {
            dem++; // Tăng biến đếm lên 1 
        }
    }
    return dem;
}

int main() 
{
    int n, x;
    cout << "Nhập số lượng phần tử của danh sách: ";
    cin >> n;

    int* arr = new int[n]; // Khai báo mảng động arr có n phần tử
    cout << "Nhập các phần tử của danh sách: ";
    for (int i = 0; i < n; i++)  // Nhập các phần tử của mảng
    {
        cin >> arr[i]; // Nhập phần tử thứ i
    }

    cout << "Nhập phần tử cần tìm: "; // Nhập phần tử cần tìm số lần xuất hiện
    cin >> x;

    // Tìm và in số lần xuất hiện của phần tử x
    int so_lan_xuat_hien = dem_so_lan_xuat_hien(arr, n, x); // Gọi hàm tìm số lần xuất hiện của phần tử x
    cout << "Phần tử " << x << " xuất hiện " << so_lan_xuat_hien << " lần." << endl; // In kết quảs

    return 0;
}

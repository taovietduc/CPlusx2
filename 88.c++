// VIẾT BẰNG C++
// Bài 88: Tạo hàm kiểm tra hai danh sách có giống nhau không.

#include <iostream>
using namespace std;

// Hàm kiểm tra hai danh sách có giống nhau không
bool kiem_tra_danh_sach_giong_nhau(int arr1[], int arr2[], int n1, int n2)  
// arr1, arr2 là hai mảng cần so sánh, n1, n2 là số phần tử của hai mảng
{
    if (n1 != n2)  // Nếu số phần tử của hai danh sách khác nhau
    {
        return false; // Nếu số phần tử khác nhau, trả về false
    }

    for (int i = 0; i < n1; i++) // So sánh từng phần tử của hai danh sách
    {
        if (arr1[i] != arr2[i])  // Nếu có phần tử không trùng khớp với nhau
        {
            return false; // Nếu có phần tử không trùng khớp, trả về false
        }
    }

    return true; // Tất cả các phần tử đều giống nhau
}

int main()  
{
    int n1, n2;
    cout << "Nhập số lượng phần tử của danh sách thứ nhất: ";
    cin >> n1;
    int* arr1 = new int[n2]; // Khởi tạo mảng động arr1 với số phần tử n1
    cout << "Nhập các phần tử của danh sách thứ nhất: ";
    for (int i = 0; i < n1; i++)  // Nhập các phần tử của danh sách thứ nhất 
    {
        cin >> arr1[i]; // Nhập phần tử thứ i của danh sách thứ nhất
    }

    cout << "Nhập số lượng phần tử của danh sách thứ hai: ";
    cin >> n2;

    delete[] arr1; // Xóa mảng động arr1

    int* arr2 = new int[n2]; // Khởi tạo mảng động arr2 với số phần tử n2
    cout << "Nhập các phần tử của danh sách thứ hai: ";
    for (int i = 0; i < n2; i++)  // Nhập các phần tử của danh sách thứ hai
    {
        cin >> arr2[i];     
    }

    if (kiem_tra_danh_sach_giong_nhau(arr1, arr2, n1, n2))  // Kiểm tra hai danh sách có giống nhau không
    {
        cout << "Hai danh sách giống nhau." << endl;
    } 
    else    // Nếu hai danh sách không giống nhau
    {
        cout << "Hai danh sách không giống nhau." << endl;
    }

    delete[] arr2;  // Xóa mảng động arr2

    return 0;
}

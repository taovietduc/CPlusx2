// VIẾT BẰNG C++
// Bài 85: Tạo hàm kiểm tra danh sách có chứa số âm không.

#include <iostream>
using namespace std;

// Hàm kiểm tra danh sách có chứa số âm không
bool kiem_tra_so_am(int arr[], int n)  // arr[]: mảng, n: số lượng phần tử của mảng
{
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử của mảng
    {
        if (arr[i] < 0) // Nếu phát hiện số âm
        { 
            return true; // Trả về true
        }
    }
    return false;
}

int main() 
{
    int n;
    cout << "Nhập số lượng phần tử của danh sách: ";
    cin >> n;

    // Khởi tạo mảng động
    int* arr = new int[n]; // Cấp phát bộ nhớ động cho mảng

    cout << "Nhập các phần tử của danh sách: ";
    for (int i = 0; i < n; i++) // Nhập từng phần tử của mảng
    {
        cin >> arr[i]; // Nhập phần tử thứ i
    }
 
    if (kiem_tra_so_am(arr, n))  // Gọi hàm kiem_tra_so_am
    {
        cout << "Danh sách có chứa số âm." << endl;
    } 
    else  // Nếu không có số âm trong danh sách
    {
        cout << "Danh sách không chứa số âm." << endl;
    }

    // Giải phóng bộ nhớ
    delete[] arr; // Giải phóng bộ nhớ đã cấp phát cho mảng

    return 0;
}

